#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
/**
* print_rev - function that prints string in reverse
* @arg: argument of type va_list
* Return: length of printed string
*/
int print_rev(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);
	free(ptr);
	return (len);
}
/**
* rev_string - reverses a string in place
*
* @s: string to reverse
* Return: A pointer to a character
*/
char *rev_string(char *s)
{
	int len;
	int start;
	char aux;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	/* permutation */
	for (start = 0; start < len; start++, len--)
	{
		aux = dest[len - 1];
		dest[len - 1] = dest[start];
		dest[start] = aux;
	}
	return (dest);
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
/**
* print_hex - convert to hex
* @arg: argument
* Return: number of elements printed
*/
int print_hex(va_list arg)
{
	char *buffer;
	int len, i;
	int a;

	a = va_arg(arg, int);
	len = alloc_len(a, 16);
	buffer = malloc(sizeof(char) * len + 1);
	/* buffer holds the number of digits of the int */
	buffer = itoa(a, buffer, 16);
	buffer[len] = '\0';
	buffer = rev_string(buffer);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(*(buffer + i));
	}
	free(buffer);
	return (i);
}
/**
* print_octale - convert to ocatle
* @arg: argument
* Return: number of elements printed
*/
int print_octale(va_list arg)
{
	char *buffer;
	int len, i;
	int a;

	a = va_arg(arg, int);
	len = alloc_len(a, 8);
	buffer = malloc(sizeof(char) * len + 1);
	/* buffer holds the number of digits of the int */
	buffer = itoa(a, buffer, 8);
	buffer[len] = '\0';
	buffer = rev_string(buffer);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(*(buffer + i));
	}
	free(buffer);
	return (i);
}
