#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
typedef struct
{
char *id;
int (*f)(va_list);
}
convert_match;
int _putchar(char c);
int _printf(const char *format, ...);
int printf_string(va_list args);
int printf_char(va_list args);
int printf_37(va_list args);
int printf_int(va_list args);
int printf_oct(va_list args);
int printf_HEX(va_list args);
int printf_exclusive_string(va_list args);
int printf_pointer(va_list args);
int printf_binary(va_list args);
int printf_hex(va_list args);
int print_percent(va_list args __attribute__((unused)));
#endif /* MAIN_H */
