#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>
/**********print_char.c*************/
/**
 * _print_char - Print a single character
 * @args: va_list containing the argument
 * @len: Pointer to length counter
 */
void _print_char(va_list args, int *len)
{
	char c = va_arg(args, int);

	_putchar(c);
	(*len)++;
}
