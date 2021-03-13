#include "holberton.h"
/**
* print_char - function that prints a char
* @c: pointer to char
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
* @c: pointer to string
*/
void print_string(va_list c)
{
	for(i = 0; c[i] != NULL; i++)
		_putchar(C);
}