#ifndef HOLBERTON_HEADER
#define HOLBERTON_HEADER
int _printf(const char *format, ...);
//typedef
typedef struct conv_specifier
{
	char *c;
	void (*f)();
} match_conversion;
int _putchar(char c);
void print_char(va_list c);
void print_string(va_list c);
#endif