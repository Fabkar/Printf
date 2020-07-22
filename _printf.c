#include "holberton.h"
/**
* _printf - print c,s,f,u,i,d
* @format: arguments
* Return: lenght of all characters
*/
int _printf(const char *format, ...)
{
	form types[] = {
		{"c", p_char}, {"i", p_int},
		{"s", p_str}, {"d", p_dec},
		{NULL, NULL}};
	va_list arguments;
	int i = 0, j, lenght = 0;

	va_start(arguments, format);
	if ((format == NULL) || ((format[0] == '%') && (format[1] == '\0')))
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				j = 0;
				while ((types[j].ch) != NULL)
				{
					if (format[i + 1] == types[j].ch[0])
						lenght += types[j].func(arguments), i++;
					j++;
				}
			}
			else
				lenght += _putchar(format[i + 1]), i++;
		}
		else
			_putchar(format[i]), lenght++;
		i++;
	}
	va_end(arguments);
	return (lenght);
}
