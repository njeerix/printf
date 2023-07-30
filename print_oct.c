#include "main.h"
/**
 * print_oct_helper - helper function to print octal recursively
 * @num: The number to convert to octal
 * Return: The number of characters printed
 */
int print_oct_helper(unsigned int num)
{
int len = 0;
if (num == 0)
return (0);
len += print_oct_helper(num / 8);
_putchar('0' + num % 8);
len++;
return (len);
}
/**
 * printf_oct - prints an unsigned integer in octal
 * @args: The va_list that contains the integer to print
 * Return: The number of character printed
 */
int printf_oct(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int len = 0;
if (num == 0)
{
_putchar('0');
return (1);
}
len = print_oct_helper(num);
return (len);
}
