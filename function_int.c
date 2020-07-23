#include "holberton.h"
/**
* p_int - print variable type integer.
* @arguments: arguments
* Return: Integer.
*/
int p_int(va_list arguments)
{
return(p_aux_int(va_arg(arguments, int), 0));
}
	
/**
* p_aux_int - Recursion function aux and print int.
* @n: Number to print (lenght).
* Return: lenght of the "int".
*/
int p_aux_int(long int n , long int count)
{
if (n < 0)
{
n = -n;
_putchar('-');
++count;
}
else if (!(n / 10))
{
	_putchar(n % 10 + '0');
	return (++count);
}
if (n/10)
	count = p_aux_int(n / 10, ++count);
_putchar(n % 10 + '0');
return (count);
}