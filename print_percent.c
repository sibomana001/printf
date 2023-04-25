#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>
/************print_percent.c **************/
/**
 * _print_percent - Print a percent symbol
 * @len: Pointer to length counter
 */

void _print_percent(int *len)
{
	_putchar('%');
	(*len)++;
}
