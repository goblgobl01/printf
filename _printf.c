#include "main.h"
/**
 * _printf - Custom printf function
 *
 * @format: A format string.
 * @...: Additional arguments.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)

{
int i, length = 0, size;

va_list arg_list;
va_start(arg_list, format);

size = str_len(format);

if (!format || !format[0])
	return (-1);
if (format[0] == '%' && format[1] == ' ')
	return (-1);


for (i = 0; i < size; i++)
{
	if (format[i] == '%')
	{
		if (format[i + 1] == 'c')
			length += c_directive(va_arg(arg_list, int));
		else if (format[i + 1] == 's')
			length += s_directive(va_arg(arg_list, const char *));
		else if (format[i + 1] == '%')
			length += por_directive('%');
		else
		{
			length += 1;
			_putchar(format[i + 1]);
		}
		i++;
	}
	else
	{
		_putchar(format[i]);
		length += 1;
	}

}

return (length);

}
