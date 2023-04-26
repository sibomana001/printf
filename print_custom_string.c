#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>
/******************print_custom_string.c*********************/
/**
 * _print_custom_string - Print a custom string
 * @args: va_list containing the argument
 * @len: Pointer to length counter
 */

void _print_custom_string(va_list args, int *len)
{
int i;
char *str = va_arg(args, char *);
if (str == NULL)
{
_putstr("(null)");
(*len) += 6; /* Update length counter for "(null)" */
}
else
{
for (i = 0; str[i]; i++)
{
if (str[i] < 32 || str[i] >= 127)
{
/* Print non-printable characters as hexadecimal escape sequences */
if (str[i] == '\n')
{
/* Special case for line feed character (\n) */
_putchar('\\');
_putchar('x');
_putchar('0');
_putchar('A');
/* Update length counter for 4 additional characters */
(*len) += 4;
}
else
{
_putchar('\\');
_putchar('x');
_putchar('0' + ((str[i] >> 4) & 0xF));
_putchar('0' + (str[i] & 0xF));
(*len) += 4;
}
}
else
{
_putchar(str[i]);
(*len)++;
}
}
}
}
