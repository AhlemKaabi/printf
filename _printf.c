#include "holberton.h"
#include <stdlib.h>
/**
*
*
*/
int _printf(const char *format, ...)
{
	//if format not exit --> return -1
	// else call parser
	int i;
	void (*fun_ptr)(va_list);
	va_list arguments;
	if (format[i] == NULL)
	{
		return (-1);
	}
	else
	{
		va_start(arguments, format);
		fun_ptr = *parser(format);
		/* if fun_ptr is NULL print the format */
		/* if fun_ptr is not NULL execute it with fun_ptr(argument) */
	}
	




	va_end(arguments);

}
