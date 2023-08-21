#include"main.h"

/**
 * printpercent - Prints a percent symbol
 *
 * @args: argument list passed from _printf
 *
 * Return: 1, length of printed percent symbol
 */
int printpercent(va_list args)
{
	(void)(args);
	_putchar('%');
	return (1);
}

/**
 * printint - prints an integer to standard output
 * @n: the integer to be printed
 *
 * Return: the number of digits printed
 */
int printint(int n)
{
	if ((n / 10) >= 1)
	{
		printint(n / 10);
	}

	_putchar((n % 10) + '0');
	return (1);
}

/**
  * printinteger - prints i and d numbers, positive and negative
  * @args: the number printed
  *
  * Return: i
  */
int printinteger(va_list args)
{
	int n = va_arg(args, int);
	int i = 0;

	if (n == 0)
		i++;

	if (n == -2147483648)
	{
		_putchar('-');
		i++;
		printint(214748364);
		_putchar('8');
		i += 10;
	}
	else
	{
	if (n < 0)
	{
		_putchar('-');
		i++;
		n = -n;
	}

	if ((n / 10) >= 1)
	{
		printint(n / 10);
	}

	_putchar((n % 10) + '0');

	while (n != 0)
	{
		n /= 10;
		i++;
	}
	}
	return (i);
}
