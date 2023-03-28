#include "main.h"

/**
 * print_char - function that prints a character passed as
 * variadic argument to the standard output
 *
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_char(va_list args)
{
	int count = 0;

	char c = (char)va_arg(args, int);

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}
