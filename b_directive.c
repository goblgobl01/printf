#include "main.h"

int b_directive(int argument)
{
int result,size = 0;

if(argument == 0)
{
	_putchar('0');
	return(1);
}

if(argument > 0)
{
	while(argument != 0)
	{
		result = argument % 2;
		_putchar(result + '0');
		argument = argument / 2;
		size++;
	}
}

return(size);
}
