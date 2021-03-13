#include "holberton.h"
#include <stdlib.h>
/**
* _printf - function that produces output according to a format.
* @format: is a character string
* Return: 
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
