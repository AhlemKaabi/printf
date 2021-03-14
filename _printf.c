#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
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
	}
	char *aux;
	char v;
	/* pos correspond to which position in f_list there is a match */
	int pos;
	int count1 = 0;
	int (*func_ptr)(va_list);

	for (i = 0; format[i] != '\0'; i++)
	{	
		if (*(format + i) == '%')
		{	
			j = i++;
			while (*(format + j + 1) != '\0' && *(format + j + 1) != ' ')
			{
				j++;
			}
			len = j - i;
			if (len == 1)
			{
				/* the format is only one char so check it's existence here */
				v = *(format + j);
				pos = check_exist_char(*(format + j),f_list);
				if (pos == NULL)
				{
					return (NULL);
				}
				func_ptr = f_list[pos].f;
				count1 = count1 + func_ptr(arguments);
			}
			/* this block here handle for multiple specifier like example %ui or %xyz */
			else
			{
				/* copy to aux from i + 1, len chars */
				_strncpy(aux,format,len, i + 1);
				/* check if aux exists in the f_list table */
				pos = check_exist_multiple(aux,f_list);
				if (pos == NULL)
				{
					return (NULL);
				}
				else
				{
					func_ptr = f_list[pos].f;
					count1 = count1 + func_ptr(arguments);
				}
			}
		}
	}
return (count1);	
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
