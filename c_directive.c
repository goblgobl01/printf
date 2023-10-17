#include "main.h"
/**
 * c_directive - A function to print a character using _putchar.
 *
 * @format: The character to be printed.
 *
 * This function takes a character as input and prints it using the _putchar
 * function. It returns 1 to indicate success.
 *
 * Return: 1 on success.
 */
int c_directive(char format)
{
	int asciiValue = format;
	char character = (char)asciiValue;

	_putchar(character);
	return (1);
}
