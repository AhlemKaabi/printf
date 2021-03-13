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
	va_list arguments;
	if (format[i] == NULL)
	{
		return (-1);
	}
	else
	{
		parser(format);
	}
	va_start(arguments, format);




	va_end(arguments);

}
