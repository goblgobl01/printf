#include "main.h"
/**
 * d_directive - Print an integer as characters
 * @argument: The integer to be printed
 *
 * Return: The number of characters printed
 */
int d_directive(int argument)
{
char buffer[20];
int i = 0, size = 0;
if (argument == 0)
{
_putchar('0');
return (1);
}
if (argument < 0)
{
_putchar('-');
argument = -argument;
}
while (argument > 0)
{
buffer[i++] = '0' + (argument % 10);
argument /= 10;
size++;
}
while (i > 0)
{
_putchar(buffer[--i]);
}
return (size);
}
