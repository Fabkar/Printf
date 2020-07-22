#include "holberton.h"
/**
* p_int - print variable type integer.
* @arguments: arguments
* Return: Integer.
*/
int p_int(va_list arguments)
{
	long int lenght, n;

	n = va_arg(arguments, int);
	lenght = p_aux_int(n);
	return (lenght);
}
/**
* p_aux_int - Recursion function aux and print int.
* @n: Number to print (lenght).
* Return: lenght of the "int".
*/
int p_aux_int(long int n)
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
		cont = 1 + p_aux_int(n / 10);
	}
	_putchar(n % 10 + '0');
	return (cont);
}