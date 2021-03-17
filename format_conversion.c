#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_char - function that prints a char
* @arg: argument of type va_list
* Return: length of one char
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
* @arg: argument of type va_list
* Return: number of elements printed
*/
int print_string(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
* print_int - function that prints integers
* @arg: argument of type va_list
* Return: number of elements printed
*/
int print_int(va_list arg)
{
	int i, div, o, Count = 0;
	int n = va_arg(arg, int);
	unsigned int num;

	o = n % 10;
	n = n / 10;
	if (n < 0 || o < 0)
	{
		n = -n;
		o = -o;
		_putchar('-');
		Count++;
	}
	num = n;
	div = 1;
	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			num = num / 10;
			div = div * 10;
		}
		while (div >= 1)
		{
			i = n / div;
			_putchar(i + '0');
			n = n % div;
			div = div / 10;
			Count++;
		}
	}
	_putchar(o + '0');
	Count++;
	return (Count);
}
/**
* print_bin - convert to binary
* @arg: argument
* Return: number of elements printed
*/
int print_bin(va_list arg)
{
	char *buffer;
	unsigned int len, i, a;

	a = va_arg(arg, unsigned int);
	if (a == 0)
	{
		return (_putchar('0'));
	}
	len = alloc_len(a, 2);
	buffer = malloc(sizeof(char) * len + 1);
	if (buffer == NULL)
	{
		return (-1);
	}
	/* buffer holds the number of digits of the int */
	buffer = itoa(a, buffer, 2);
	buffer[len] = '\0';
	buffer = rev_string(buffer);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(*(buffer + i));
	}
	free(buffer);
	return (i);
}
