#include "main.h"
/**
 * printf_int - Prints an integer
 * @args: The va_list that contains the integer to print
 * Return: The number of characters printed
 */
static void print_digits(int num)
{
if (num == 0)
return;
print_digits(num / 10);
_putchar('0' + num % 10);
}
int printf_int(va_list args)
{
int num = va_arg(args, int);
int len = 0;
if (num < 0)
{
_putchar('-');
len++;
num = -num;
}
if (num == 0)
{
_putchar('0');
return (len + 1);
}
print_digits(num);
return (len);
}
