#include <stdio.h>
#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
convert_match m[] = {
{"%s", printf_string},
{"%c", printf_char},
{"%%", print_percent},
{"%i", printf_int},
{"%d", printf_int},
{"%b", printf_binary},
{"%o", printf_oct},
{"%x", printf_hex},
{"%X", printf_HEX},
};
va_list args;
int i = 0, j, len = 0;
va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
while (format[i] != '\0')
{
j = 0;
while (j < (int)(sizeof(m) / sizeof(m[0])))
{
if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
{
len += m[j].f(args);
i += 2;
break;
}
j++;
}
if (j == sizeof(m) / sizeof(m[0]))
{
_putchar(format[i]);
len++;
i++;
}
}
va_end(args);
return (len);
}
