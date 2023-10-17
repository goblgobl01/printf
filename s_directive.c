#include "main.h"

/**
 * s_directive - Print a string (if not NULL)
 *
 * @format: The string to print
 *
 * Return: The number of characters printed.
 */
int s_directive(const char *format)
{
int i, size, j;
char *str = "(null)";

if (format == NULL)
{
	for (j = 0; j < 6; j++)
	{
		_putchar(str[j]);
	}
	return (6);
}
else
{
	size = str_len(format);
	for (i = 0; i < size; i++)
		_putchar(format[i]);
}
return (size);
}
