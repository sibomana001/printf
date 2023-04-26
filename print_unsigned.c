#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>
/**********print_unsigned.c***********/
/**
 * _print_unsigned - Print an unsigned integer
 * @args: va_list containing the argument
 * @len: Pointer to length counter
 * @base: Base for conversion (e.g., 10 for decimal)
 * @uppercase: Flag to indicate if output should be uppercase
 */

void _print_unsigned(va_list args, int *len, int base, int uppercase)
{
unsigned int num;
int digit, idx;
char digits[16] = "0123456789abcdef";
char buffer[32];
num = va_arg(args, unsigned int);
if (num == 0)
{
_putchar('0');
(*len)++;
return;
}
if (uppercase)
{
digits[0] = '0';
digits[1] = '1';
digits[2] = '2';
digits[3] = '3';
digits[4] = '4';
digits[5] = '5';
digits[6] = '6';
digits[7] = '7';
digits[8] = '8';
digits[9] = '9';
digits[10] = 'A';
digits[11] = 'B';
digits[12] = 'C';
digits[13] = 'D';
digits[14] = 'E';
digits[15] = 'F';
}
idx = 0;
while (num > 0)
{
digit = num % base;
buffer[idx++] = digits[digit];
num /= base;
}
while (idx > 0)
{
_putchar(buffer[--idx]);
(*len)++;
}
}
