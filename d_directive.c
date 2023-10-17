#include "main.h"


int d_directive(int argument)
{
char buffer[20];
int i = 0, size = 0, j, decimal = 0;

if (argument == 0)
{
	_putchar('0');
	return(1);
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

if (buffer[0] != '0')
{
while (i > 0)
{
_putchar(buffer[--i]);
}
}
else if (buffer[size] == '0')
{
for (j = 0; j < size; j++)
        decimal = decimal * 8 + (buffer[j] - '0');
d_directive(decimal);
}

return (size);
}
