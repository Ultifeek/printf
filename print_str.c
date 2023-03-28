#include "main.h"

/**
 * print_str - function that prints a string passed as
 * variadic argument to the standard output
 *
 * @args: variadic parameter
 * Return: number of characters printed
 */

int print_str(va_list args)
{
	char *str;
	int i, value;
	int count = 0;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		return (-1);
	}

	while (str[i])
	{
		value = write(1, &str[i], 1);
		count = value + count;
		i++;
	}

	return (count);
}
