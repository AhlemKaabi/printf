#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* _strlen - returns the length of a string.
* @s: parameter
* Return: Always 0.
**/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * format_resolve - function that matches the format
 * @c: the format c
 * @arguments: pointer to arguments
 * Return: the number of printed chars
**/
int format_resolve(char c, va_list arguments)
{
	match_conversion f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"b", toBi},
		{"%", print_percent},
		{"n", new_line},
		{"r", print_rev},
		{"f", form_feed},
		{"t", print_tab},
		{"R", print_rot13},
		{NULL, NULL}
	};
	int i = 0;
	int printed;
	int (*func_ptr_frmt)(va_list);

	while (f_list[i].c != NULL)
	{
		if (f_list[i].c[0] == c)
		{
			func_ptr_frmt = f_list[i].f;
			printed = func_ptr_frmt(arguments);
			return (printed);
		}
		else
		{
			i++;
		}
	}
	return (-1);
}
/**
 * parser - function that will parse the given format
 * @format: the format to be parsed
 * @arguments: pointer to arguments
 * Return: the number of printed chars in count1
**/
int parser(const char *format, va_list arguments)
{
	char v;
	int i, sum;
	int printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (*(format + i) == '%' || *(format + i) == '\\')
		{
			v = *(format + i + 1);
			sum = format_resolve(v, arguments);
			if (sum == -1) /* no match was found */
			{
				_putchar(*(format + i));
				_putchar(*(format + i + 1));
				printed_chars = printed_chars + 2;
				i++;
			}
			else
			{
				printed_chars = printed_chars + sum;
				i++;
			}
		}
		else
		{
			_putchar(*(format + i));
			printed_chars++;
		}
	}
return (printed_chars);
}
/**
* _printf - function that produces output according to a format.
* @format: is a character string
* Return: count of characters in format
*/
int _printf(const char *format, ...)
{
	int final_count;
	va_list arguments;

	if (format == NULL)
	{
		return (-1);
	}
	else
	{
		va_start(arguments, format);
		final_count = parser(format, arguments);
	}

	va_end(arguments);
	return (final_count);
}
