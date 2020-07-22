#include "holberton.h"
/**
* p_int - print variable type integer.
* @arguments: arguments
* Return: Integer.
*/
int p_int(va_list arguments)
{
	long int lenght, n, cont = 1;

	n = va_arg(arguments, int);
	lenght = p_aux_int(n, cont);
	return (lenght);
}
/**
* p_aux_int - Recursion function aux and print int.
* @n: Number to print (lenght).
* @cont: Counter to string.
* Return: lenght of the "int".
*/
int p_aux_int(long int n, int cont)
{
	++cont;
	if (n < 0)
	{
		n *= -1, _putchar('-'), ++cont;
	}
	if (n / 10)
	{
		p_aux_int(n / 10, cont);
	}
	_putchar(n % 10 + '0');
	return (cont);
}
