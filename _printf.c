#include "holberton.h"
/**
* _printf - print c,s,f,u,i,d
* @format: arguments
* Return: length of all characters
*/
int _printf(const char *format, ...)
{
form types[] = {
	{"c", p_char}, {"s", p_str}, {"d", p_int}, {"i", p_int}, {NULL, NULL}};
	va_list arguments;
	int pos = 0, length = 0, pos_form;

	va_start(arguments, format);
	if (!format || !format[pos])
		return (-1);
	for (; format[pos]; pos++)
	{
		if (format[pos] == '%')
		{
			if (format[pos + 1] == '\0')
				return (-1);
			if (format[pos + 1] == '%')
				_putchar(37), length++;
			else
			{
				for (pos_form = 0; types[pos_form].ch != NULL; pos_form++)
				{
					if (types[pos_form].ch[0] == format[pos + 1])
					{
						length += types[pos_form].func(arguments);
						break;
					}
				}
				if (types[pos_form].ch == NULL)
				{
					_putchar(format[pos]);
					_putchar(format[pos + 1]), length++;
				}
			}
			pos++;
		}
		else
			_putchar(format[pos]), length++;
	}
	va_end(arguments);
	return  (length);
}
