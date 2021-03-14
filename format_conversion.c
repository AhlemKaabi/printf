#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_char - function that prints a char
* @c: argument of type va_list
* @return: number of elements printed
*/
int print_char(va_list c)
{
	i = 0;
	while(c != '\0')
	{
		write(1, &c , 1);
		i++;
	}
	return (i);
}
/**
* print_string - function that prints string
* @c: argument of type va_list
* @return: number of elements printed
*/
void print_string(va_list c)
{
	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c);
	}
	return (i);
}