#ifndef HOLBERTON_HEADER
#define HOLBERTON_HEADER
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* struct convert - defines a structure for symbols and functions
*
* @c: The operator
* @f: The function that matches
*/
typedef struct conv_specifier
{
	char *c;
	int (*f)(va_list);
} match_conversion;

/* initial functions */
int _putchar(char c);
int _printf(const char *format, ...);
int parser(char *format);

/* format conversion functions */
int print_char(va_list c);
int print_string(va_list c);
#endif