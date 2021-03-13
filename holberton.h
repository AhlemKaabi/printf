#ifndef HOLBERTON_HEADER
#define HOLBERTON_HEADER
int _printf(const char *format, ...);
//typedef
typedef struct conv_specifier
{
	char *c;
	void (*f)();
} match_conversion;

#endif