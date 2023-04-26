#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>
/**********print_string.c*************/
/**
 * my_strlen - Custom string length function
 * @str: Input string
 *
 * Return: Length of the string
 */
int my_strlen(const char *str)
{
int len = 0;
while (*str != '\0')
{
len++;
str++;
}
return (len);
}

/**
 * _putstr - Custom string print function
 * @str: Input string
 */
void _putstr(const char *str)
{
int len = my_strlen(str);
write(1, str, len);
}

/**
 * _print_string - Print a string
 * @args: va_list containing the argument
 * @len: Pointer to length counter
 */

void _print_string(va_list args, int *len)
{
char *str = va_arg(args, char *);
char null_str[1024];
char str_buffer[1024];
int i;

strcpy(null_str, "(null)");
i = 0;
if (str == NULL)
{
while (null_str[i] != '\0')
{
(*len)++;
_putchar(null_str[i]);
i++;
}
}
else
{
i = 0;
while (str[i] != '\0' && i < 1023)
{
str_buffer[i] = str[i];
i++;
}
str_buffer[i] = '\0';
(*len) += i;
_putstr(str_buffer);
}
}
