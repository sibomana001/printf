#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>


/* Prototypes for print functions */
int _putchar(char c);
void _print_char(va_list args, int *len);
int my_strlen(const char *str);
void _putstr(const char *str);
void _print_string(va_list args, int *len);
void _print_int(va_list args, int *len);
void _print_unsigned(va_list args, int *len, int base, int uppercase);
void _print_pointer(va_list args, int *len);
void _print_percent(int *len);
void _print_binary(va_list args, int *len);
/*void _print_rot13(va_list args, int *len);*/
void _print_custom_string(va_list args, int *len);
int _printf(const char *format, ...);

#endif /* MAIN_H */
