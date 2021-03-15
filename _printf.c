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
* check_exist_formatter - check if char send is in the format specifier table
* @x: char that comes after the %
* @f_list: table containing formatter
* Return: position of the matched formatter in the table f_list[]
**/
int check_exist_formatter(char x, match_conversion f_list[])
{
	int i = 0;

	while (f_list[i].c != NULL)
	{
		if (f_list[i].c[0] == x)
		{
			return (i);
		}
		else
		{
			i++;
		}
	}
	return (-1);
}
/**
 * check_escape - check if char send is a special escape character
 * @x: char_that_comes_after_the_'\'
 * @e_list: table containing special escaper
 * Return: position of match in the table e_list[]
**/
int check_escape(char x, match_escape e_list[])
{
	int i = 0;

	while (e_list[i].c != NULL)
	{
		if (e_list[i].c[0] == x)
		{
			return (i);
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
 * @f_list: table containing format specifier
 * @e_list: table containing special escape specifier
 * Return: the number of printed chars in count1
**/
int parser(const char *format, va_list arguments, match_conversion f_list[], match_escape e_list[])
{
	char v;
	int pos, i, j;
	int printed_chars = 0;
	int (*func_ptr_frmt)(va_list);
	int (*func_ptr_escape)(void);

	for (i = 0; format[i] != '\0'; i++)
	{
		/* this block checks for the format specifier */
		if (*(format + i) == '%')
		{
			j = i + 1;
			v = *(format + j);
			pos = check_exist_formatter(v, f_list);
			if (pos == -1)
			{
				/* the format specifier is not defined just print the % and the char */
				_putchar(*(format + i));
				_putchar(v);
				printed_chars = printed_chars + 2;
				i = i + 2;
			}
			else
			{
				func_ptr_frmt = f_list[pos].f;
				printed_chars = printed_chars + func_ptr_frmt(arguments);
				i++;
			}
		}
		/* this block checks for the escape character */
		else if (*(format + i) == '\\')
		{
			j = i + 1;
			v = *(format + j);
			pos = check_escape(v, e_list);
			if (pos == -1)
			{
				_putchar(*(format + i));
				printed_chars++;
			}
			else
			{
				func_ptr_escape = e_list[pos].f;
				printed_chars = printed_chars + func_ptr_escape();
				i = i + 2;
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
	match_conversion f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percent},
		{NULL, NULL}
	};
	match_escape e_list[] = {
		{"n", new_line},
		{NULL, NULL}
	};

	int final_count;
	va_list arguments;

	if (format == NULL)
	{
		return (-1);
	}
	else
	{
		va_start(arguments, format);
		final_count = parser(format, arguments, f_list, e_list);
	}

	va_end(arguments);
	return (final_count);
}
