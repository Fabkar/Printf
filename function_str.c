#include "holberton.h"
/**
* p_str - print variable type string.
* @arguments: number of arguments.
* Return: Integer.
*/
int p_str(va_list arguments)
{
	char *p;
	int a;

	p = va_arg(arguments, char *);
	if (p == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (a = 0 ; p[a] != '\0' ; a++)
	{
	_putchar(p[a]);
	}
	return (a);
}
