#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* new_line - function that prints a char
* return: number of char printed
*/
int new_line(va_list arg)
{
	(void)arg;
	_putchar('\n');
	return (1);
}

