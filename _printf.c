#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
int check_exist_char(char x, match_conversion f_list[])
{
	int i = 0;
	
	while (f_list[i].c != NULL)
	{
		if (f_list[i].c[0] == x)
		{
			return (i);
		}
	}
	return (-1);
}
/**
 * _strlen - returns the length of a string.
 *@s: parameter pointer var
 * Return: Always 0.
 */
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
 * parser - function that will parse the given format
 * and count how many chars are printed
 * it will also call the function that match the format specifier
 * @format: *pointer to the given format
 * Return: the number of printed chars count1
**/
int parser(const char *format, va_list arguments)
{
	/* --- TODO: use _strspn to check if there is no % directly    */ 
	/* --- DONE: declare table of type match_conversion            */
	/* --- DONE: loop through the format and check for %           */
	/* --- TODO: if no % is found return NULL                      */
	/* --- TODO: add a function check_exist_char(v,f_list) for one char match */
	/* --- TODO: add a function check_exist_multiple(v,f_list) for more than 1 char match */
	/* --- TODO: add condition for escape character \ */
	/* --- TODO: add condition for \n */
	match_conversion f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	char v;
	/* pos correspond to which position in f_list there is a match */
	int pos, i, j;
	int printed_chars = 0;
	int (*func_ptr)(va_list);
	
	for (i = 0; format[i] != '\0'; i++)
	{	
		if (*(format + i) == '%')
		{	
			j = i + 1;
			/* the format is only one char so check it's existence here */
			v = *(format + j);
			pos = check_exist_char(v,f_list);
			if (pos == -1)
			{
				return (0);
			}
			else
			{
				func_ptr = f_list[pos].f;
				printed_chars = printed_chars + func_ptr(arguments);
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
* Return: 
*/
int _printf(const char *format, ...)
{
	//if format not exit --> return -1
	// else call parser
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
		/* if fun_ptr is NULL print the format */
		/* if fun_ptr is not NULL execute it with fun_ptr(argument) */
	}
	
	va_end(arguments);
	return(final_count);
}