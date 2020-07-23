#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
/**
* struct formats - struct formats
* @ch: pointer to firts element.
* @func: The function associated.
*/
typedef struct formats
	{
		char *ch;
		int (*func)();
	} form;
int _putchar(char c);
int _printf(const char *format, ...);
int p_aux_int(long int n);
int p_str(va_list arguments);
int p_char(va_list arguments);
int p_int(va_list arguments);
#endif/*_HOLBERTON_H_*/