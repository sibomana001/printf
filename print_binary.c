#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>
/*****************print_binary.c********************/
/**
 * _print_binary - Prints the binary representation of an unsigned int argument
 * @args: A va_list containing the argument to be printed
 * @len: A pointer to an int to store the total number of characters printed
 */
void _print_binary(va_list args, int *len)
{
	unsigned int num;
	int digit;
	char buffer[32]; /* Buffer to hold binary string representation*/
	int buffer_index = 0; /* Index of the buffer*/
	int i;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		(*len)++;
		return;
	}
	/* Convert unsigned int to binary string*/
	while (num > 0)
	{
		digit = num % 2;
		buffer[buffer_index++] = '0' + digit;
		num /= 2;
	}
	/* Write binary string in reverse order*/
	for (i = buffer_index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
		(*len)++;
	}
}
