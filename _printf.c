#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string containing format specifiers.
 * @...: Variable arguments to be printed.
 *
 * Return: Number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == 'c')  /* Handle %c specifier */
			{
				int ch = va_arg(args, int);
				putchar(ch);
				count++;
			}
			else if (format[i] == 's')  /* Handle %s specifier */
			{
				char *str = va_arg(args, char*);
				for (int j = 0; str[j] != '\0'; j++)
				{
					putchar(str[j]);
					count++;
				}
			}
			else if (format[i] == '%')  /* Handle %% specifier */
			{
				putchar('%');
				count++;
			}
		}
		else
		{
			putchar(format[i]);
			count++;
		}
	}

	va_end(args);
	return (count);
}

