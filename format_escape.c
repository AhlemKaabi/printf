#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* new_line - function that prints a char
* @arg: parameter
* Return: number of char printed
*/
int new_line(va_list arg)
{
	(void)arg;
	_putchar('\n');
	return (1);
}
/**
* print_percent - function that prints a char
* @arg: argument of type va_list
* Return: length of one char
*/
int print_percent(va_list arg)
{
	(void)arg;
	_putchar('%');
	return (1);
}
/**
* carriage_return - function that prints a char
* @arg: argument of type va_list
* Return: length of one char
*/
int carriage_return(va_list arg)
{
	(void)arg;
	_putchar('\r');
	return (1);
}
/**
* form_feed - function that prints a char
* @arg: argument of type va_list
* Return: length of one char
*/
int form_feed(va_list arg)
{
	(void)arg;
	_putchar('\f');
	return (1);
}
/**
* print_tab - function that prints a char
* @arg: argument of type va_list
* Return: length of one char
*/
int print_tab(va_list arg)
{
	(void)arg;
	_putchar('\t');
	return (1);
}
