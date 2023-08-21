#include"main.h"

/**
 * _putchar - writes a character to stdout
 *
 * @c: the character to print
 *
 * Return: On success, returns the number of characters written (1).
 *         On error, returns -1 and sets errno appropriately.
 */
int _putchar(char z)
{
	return (write(1, &z, 1));
}

/**
 * _putchar - writes a character to stdout
 *
 * @c: the character to print
 *
 * Return: On success, returns the number of characters written (1).
 *         On error, returns -1 and sets errno appropriately.
 */
int printchar(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * printstring - prints a string to stdout
 *
 * @args: a va_list of arguments containing the string to print
 *
 * Return: the number of characters printed.
 *         if an error occurs, -1 is returned.
 */
int printstring(va_list args)
{
	const char *str;
	int rev = 0;

	str = va_arg(args, const char *);

	if (!str)
		str = "(null)";
	while (*str)
	{
		rev += _putchar(*str);
		if (rev == -1)
			return (-1);
		str++;
	}
	return (rev);
}
