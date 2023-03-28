#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list);
int print_char(va_list args);
int print_str(va_list args);
int print_cent(va_list args);

/**
 * struct func - structure for specifier to print
 *
 * @t: character to compare
 *
 * @f: function to handle printing
 */

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

#endif











