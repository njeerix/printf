#include "main.h"
/**
 * Prototype for the print_HEX_recursivr function
 * @num: The number to convert to uppercase hexadecimal
 */
static void print_HEX_recursive(unsigned int num);
/**
 * printf_HEX - prints an unsigned integer in uppercase hexadecimal
 * @args: The va_list that contains the integer to point.
 * Return: The number of characters printed.
 */
int printf_HEX(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int len = 0;
if (num == 0)
{
_putchar('0');
return (1);
}
print_HEX_recursive(num);
return (len);
}
/**
 * print_HEX_recursive - helps function to print uppercase hexadecimal recursion
 * @num: The number to convert to uppercase hexadecimal
 */
static void print_HEX_recursive(unsigned int num)
{
int remainder = 0;
if (num == 0)
return;
print_HEX_recursive(num / 16);
remainder = num % 16;
if (remainder < 10)
_putchar('0' + remainder);
else
_putchar('A' + remainder - 10);
}
