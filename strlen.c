#include "main.h"

/**
 * str_len - Calculate the length of a string.
 * @string: The input string.
 *
 * Return: The length of the string.
 */

int str_len(const char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}
