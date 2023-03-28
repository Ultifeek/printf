#include "main.h"

/**
 * print_cent - function that prints a percentage sign
 * character passed as
 * variadic argument to the standard output
 *
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_cent(__attribute__((unused))va_list args)
{
	write(1, "%", 1);

	return (1);
}
