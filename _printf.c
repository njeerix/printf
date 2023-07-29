#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
convert_match m[] = {
{"%s", printf_string}, {"%c", printf_char},
{"%%", printf_37},
{"%i", printf_int}, {"%d", printf_doc}, {"%r", printf_srev},
{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
{"%o", printf_oct}, {"%x", print_hex}, {"%X", printf_HEX},
{"%S", printf_exclusive_string}, {"%p", printf_pointer}
};
va_list args;
int i, j, len;
va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
i = 0;
len = 0;
while (format[i] != '\0')
{
for (j = 13; j >= 0; j--)
{
if (m[j].id[0] == format[i] && m[j].id[i] == format[i + 1])
{
len += m[j].f(args);
i = i + 2;
break;
}
}
if (j < 0)
{
_putchar(format[i]);
len++;
i++;
}
}
va_end(args);
return (len);
}
