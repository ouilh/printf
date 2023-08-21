#include "main.h"

/**
 * theprint - selects the function to use based on the given format specifier.
 *
 * @format: the format specifier character.
 * @args: a va_list of arguments for the selected function.
 *
 * Return: a pointer to the function corresponding to the format specifier.
 *         NULL if no matching function is found.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int i, j;
	int (*printfunct)(va_list);
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; format[j + 1] == ' '; j++)
			{
				if (format[j + 2] == '\0')
					return (-1);
			}
			i++;
			printfunct = theprint(&format[i]);

			if (printfunct != NULL)
				count += printfunct(args);
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
			count += _putchar(format[i]);
	}
	va_end(args);
	return (count);
}
