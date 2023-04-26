#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>
/**********print_int.c***********/
/**
 * _print_int - Print an integer
 * @args: va_list containing the argument
 * @len: Pointer to length counter
 */

void _print_int(va_list args, int *len)
{
int num;
int reversed_num;
int digit;
num = va_arg(args, int);
if (num == 0)
{
_putchar('0');
(*len)++;
return;
}

if (num < 0)
{
_putchar('-');
(*len)++;
num = -num;
}

reversed_num = 0;
while (num > 0)
{
digit = num % 10;
reversed_num = reversed_num * 10 + digit;
num /= 10;
}

while (reversed_num > 0)
{
digit = reversed_num % 10;
_putchar('0' + digit);
(*len)++;
reversed_num /= 10;
}
}
