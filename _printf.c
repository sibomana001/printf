#include "main.h"
/*********** _printf.c ****************/
/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable number of arguments
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
int len = 0;
int i;
va_list args;
va_start(args, format);
for (i = 0; format[i]; i++)
{
if (format[i] == '%')
{
if (format[++i])
{
switch (format[i])
{
case 'c':
_print_char(args, &len);
break;
case 's':
_print_string(args, &len);
break;
case 'd':
case 'i':
_print_int(args, &len);
break;
case 'u':
_print_unsigned(args, &len, 10, 0);
break;
case 'o':
_print_unsigned(args, &len, 8, 0);
break;
case 'x':
_print_unsigned(args, &len, 16, 0);
break;
case 'X':
_print_unsigned(args, &len, 16, 1);
break;
case 'p':
_print_pointer(args, &len);
break;
case '%':
_print_percent(&len);
break;
case 'b':
_print_binary(args, &len);
break;
case 'S':
_print_custom_string(args, &len); /*Custom implementation for %S */
break;
default:
_putchar('%');
_putchar(format[i]);
len += 2;
break;
}
}
else
{
/* Handle case where '%' is at the end of the format string*/
_putchar('%');
len++;
}
}
else
{
_putchar(format[i]);
len++;
}
}

va_end(args);
return (len);
}
