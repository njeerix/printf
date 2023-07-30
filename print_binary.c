#include "main.h"
/**
 * print_binary_helper - Recursively prints binary representation of a number
 * @n: the number to print in binary
 */
static void print_binary_helper(unsigned int n)
{
if (n > 1)
print_binary_helper(n / 2);
_putchar('0' + n % 2);
}
/**
 * printf_binary - Prints an unsigned integer in binary
 * @args: The va_list that contains the integer to print.
 * Return: The number of characters printed
 */
int printf_binary(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int len = 0;
if (num == 0)
{
_putchar('0');
len++;
return len;
}
print_binary_helper(num);
return (len);
}
