#include "main.h"

/**
 * check_specifier - check that character is a valid specifier
 * and assign appropriate function for its printing
 *
 * @format: the specifier (char*)
 *
 * Return: pointer to function, if successful
 * NULL pointer if not
 */

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[4] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}
	return (NULL);
}
