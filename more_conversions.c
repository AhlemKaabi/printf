#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_rev - function that prints string in reverse
* @arg: argument of type va_list
* Return: length of printed string
*/
int print_rev(va_list arg)
{
	int i = 0;
	char *str;
	int len = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	_putchar('\n');
	for (i = len; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (len);
}
/**
 * print_rot13 - encode a string using rot13
 * @arg: string.
 * Return: string.
 */
int print_rot13(va_list arg)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		return (-1);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_putchar(u[x]);
				break;
			}
		}
		if (x == 53)
			_putchar(str[i]);
	}
	return (i);
}
