#include "holberton.h"
/**
* p_int - print variable type integer.
* @arguments: arguments
* Return: Integer.
*/
int p_int(va_list arguments)
{
	long int n, n_aux, d = 1, l_aux;
	int count = 0;

	n = va_arg(arguments, int);

	if (n < 0)
	{
		n_aux = -n;
		_putchar('-');
		count++;
	}
	else
		n_aux = n;
	l_aux = n_aux;
	while (n_aux > 9)
	{
		n_aux = n_aux / 10;
		d *= 10;
	}
	while (d > 0)
	{
		_putchar(((l_aux / d) % 10) + '0');
		count++;
		d /= 10;
	}
	return (count);
}
