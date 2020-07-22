#include "holberton.h"
/**
* p_dec - print variable with decimal.
* @arguments: number of arguments.
* Return: integer.
*/
int p_dec(va_list arguments)
{
	long int lenght, n;

	n = va_arg(arguments, int);
	lenght = p_aux_dec(n);
	return (lenght);
}
/**
* p_aux_dec - Recursion function aux.
* @n: Number to print (lenght).
* Return: lenght of the "int".
*/
int p_aux_dec(long int n)
{
	int cont = 0;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		cont++;
	}
	if (n / 10)
	{
		cont = 1 + p_aux_dec(n / 10);
	}
	_putchar(n % 10 + '0');
	return (cont);
}
