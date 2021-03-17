#ifndef HOLBERTON_HEADER
#define HOLBERTON_HEADER
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* conv_specifier - defines a structure for format and escape
*
* @sym: The operator
* @f: The function associated
*
* description: nothing to say here
*/
typedef struct conv_specifier
{
	char *c;
	int (*f)(va_list);
} match_conversion;
/* helper and initial functions */
int _putchar(char c);
int _printf(const char *format, ...);
int parser(const char *format, va_list arguments);
int format_resolve(char c, va_list arguments);
char *rev_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
char hex_digit(int v);
int alloc_len(int num, int base);
char* itoa(int num, char* str, int base);

/* format conversion functions */
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int print_rev(va_list arg);
int print_rot13(va_list arg);
int print_hex(va_list arg);
int print_octale(va_list arg);
int print_bin(va_list arg);

/* escape conversion functions */
int new_line(va_list arg);
int carriage_return(va_list);
int form_feed(va_list arg);
int print_tab(va_list arg);
int print_percent(va_list arg);
#endif
