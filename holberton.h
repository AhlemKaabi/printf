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
/* initial functions */
int _putchar(char c);
int _printf(const char *format, ...);
int parser(const char *format, va_list arguments);
int format_resolve(char c, va_list arguments);

/* format conversion functions */
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int print_percent(va_list arg);
int toBi(va_list arg);
unsigned int print_binary_int(unsigned int n);

/* escape conversion functions */
int new_line(va_list arg);
#endif