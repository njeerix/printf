#include "main.h"
#include <stdlib.h>
/**
 * printf_hex - prints an hexadecimal number
 * @val: arguments
 * Return: counter
 */
int printf_hex(va_list val)
{
int i;
int *array;
unsigned int num = va_arg(val, unsigned int);
unsigned int temp = num;
int counter = 0;
while (num / 16 != 0)
{
num /= 16;
counter++;
}
counter++;
array = (int *)malloc(counter * sizeof(int));
for (i = 0; i < counter; i++)
{
array[i] = temp % 16;
temp /= 16;
}
for (i = counter - 1; i >= 0; i--)
{
if (array[i] > 9)
array[i] = array[i] + 39;
_putchar(array[i] + '0');
}
free(array);
return (counter);
}
