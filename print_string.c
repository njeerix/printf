#include <stddef.h>
#include "main.h"
/**
 * printf_string - Prints a string
 * @args: The va_list that contains the string to print.
 * Return: The number of characters printed.
 */
int printf_string(va_list args)
{
char *str = va_arg(args, char *);
int len = 0;
if (str == NULL)
str = "(null)";
while (*str != '\0')
{
_putchar(*str);
len++;
str++;
}
return (len);
}
