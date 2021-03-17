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
* toBi - function that binary
* @arg: argument of type va_list
* Return: number of elements printed
*/
int toBi(va_list arg)
{
	long int temp, binary = 0, reminder, f = 1;
	int result;

	temp = va_arg(arg, int);
	if (va_arg(arg, int) == 0)
	{
		return (0);
	}
	while (temp != 0)
	{
		reminder = temp % 2;
		binary = binary + reminder * f;
		f = f * 10;
		temp = temp / 2;
	}
	result = print_binary_int(binary);
	return (result);
}
/**
* print_binary_int - convert to binary
* @n: argument
* Return: number of elements printed
*/
long int print_binary_int(long int n)
{
	long int num, div, Count = 0, i;

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
	return (Count);
}
