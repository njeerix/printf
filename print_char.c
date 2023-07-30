#include "main.h"
/**
 * printf_char - Prints a character
 * @args: The va_list that contains the character to print
 * Return: The number of characters prited.
 */
int printf_char(va_list args)
{
char c = va_arg(args, int);
_putchar(c);
return (1);
}
