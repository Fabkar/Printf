#include "holberton.h"
/**
* p_char - writes the character c to stdout.
* @arguments: The character to print
* Return: integer.
*/
int p_char(va_list arguments)
{
	_putchar(va_arg(arguments, int));
	return (1);
}
