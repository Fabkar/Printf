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
		{"s", p_str}, {"d", p_int},
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
					{
						lenght += types[j].func(arguments), i += 2;
						break;
					}
					j++;
				}
				if ((types[j].ch) != NULL)
					continue;
			}
			if (!(types[j].ch) && format[i + 1] == ' ' && format[i + 2] == '%')
			{
				_putchar(format[i]), i += 3, lenght++;
				continue;
			}
			if ((format[i + 1] != '%') && (format[i + 1] != ' '))
			{
				_putchar(format[i]), i++, lenght++;
				continue;
			}
			if (((format[i + 1] == '\n') && (format[i + 2] == '\0')) || (format[i]))
			{
				_putchar('%'), i += 2, lenght++;
				continue;
			}
		}
		else
			_putchar(format[i]), i++, lenght++;
	}
	va_end(arguments);
	return (lenght);
}
