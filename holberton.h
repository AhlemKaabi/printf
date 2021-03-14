#ifndef HOLBERTON_HEADER
#define HOLBERTON_HEADER
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* conv_specifier - defines a structure for symbols and functions
*
* @c: The operator
* @f: The function that matches
*/
typedef struct conv_specifier
{
	char *c;
	int (*f)(va_list);
} match_conversion;
/**
* struct escape_specifier - defines a structure for symbols and functions
*
* @c: The operator
* @f: The function that matches
*/
typedef struct escape_specifier
{
	char *c;
	int (*f)(void);
} match_escape;

/* initial functions */
int _putchar(char c);
int _printf(const char *format, ...);
int parser(const char *format, va_list arguments, match_conversion f_list[], match_escape e_list[]);

/* format conversion functions */
int print_char(va_list arg);
int print_string(va_list arg);
/* escape conversion functions */
int new_line(void);
#endif