#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>
/*************print_pointer.c*************/
/**
 * _print_pointer - Print a pointer
 * @args: va_list containing the argument
 * @len: Pointer to length counter
 */

void _print_pointer(va_list args, int *len)
{
void *ptr = va_arg(args, void*);
unsigned long addr = (unsigned long) ptr;
char buffer[16]; /* Buffer to hold hexadecimal string representation*/
int buffer_index = 0; /* Index of the buffer*/
int remain;
int i;

/* Convert pointer value to hexadecimal string*/
while (addr > 0)
{
remain = addr % 16;
buffer[buffer_index++] = (remain < 10) ? ('0' + remain) : ('a' + remain - 10);
addr /= 16;
}

/* Write "0x" prefix*/
_putchar('0');
_putchar('x');
(*len) += 2;

/* Write hexadecimal string in reverse order*/
for (i = buffer_index - 1; i >= 0; i--)
{
_putchar(buffer[i]);
(*len)++;
}
}
