#include "holberton.h"
/**
* p_dec - print variable with decimal.
* @arguments: number of arguments.
* Return: integer.
*/
int p_dec(va_list arguments)
{
	int lenght, n, cont = 1;
		n = va_arg(arguments, int);
	lenght = p_aux_dec(n, cont);
	return (lenght);
}
/**
* p_aux_dec - Recursion function aux.
* @n: Number to print (lenght).
* @cont: Counter to string.
* Return: lenght of the "int".
*/
int p_aux_dec(int n, int cont)
{
	++cont;
	if (n < 0)
	{
		n = -n, _putchar('-'), ++cont;
	}
	if (n / 10)
	{
		p_aux_dec(n / 10, cont);
	}
	_putchar(n % 10 + '0');
	return (cont);
}