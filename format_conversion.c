#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_char - function that prints a char
* @c: argument of type va_list
* @return: number of elements printed
*/
int print_char(va_list arg)
{
	char c;
	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
/**
* print_string - function that prints string
* @c: argument of type va_list
* @return: number of elements printed
*/
int print_string(va_list arg)
{
	int i = 0;
	char *str;
	str = va_arg(arg, char *);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}