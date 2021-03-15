#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 * --> stands for the normal printf output
 * Return: Always 0
 */
int main(void)
{
    char test_char = 'A';
    char *test_string = "hello holberton";
    int x = 1125;
    int len;
    
    /* test for print char and len of printed chars */
    len = printf("variable test_char = %c\n", test_char);
    printf("normal len = %d\n", len);
    len = _printf("variable test_char = %c\n", test_char);
    printf("my len = %d\n", len);
	_printf("-------------- TEST CHAR DONE --------------\n");    
    
    /* test for print string and len of printed chars */
    len = printf("variable test_string = %s\n", test_string);
    printf("normal len = %d\n", len);
    len = _printf("variable test_string = %s\n", test_string);
    printf("my len = %d\n", len);
    _printf("-------------- TEST STRING DONE --------------\n");
    
    /* test for print int and len of printed int */
    len = printf("variable test_string = %d\n", x);
    printf("normal len = %d\n", len);
    len = _printf("variable test_string = %d\n", x);
    printf("my len = %d\n", len);
    _printf("-------------- TEST INT DONE --------------\n");

    /* test for new line and len of printed chars */
    len = printf("this string has no formatter\n");
    printf("normal len = %d\n", len);
    len = _printf("this string has no formatter\n");
    printf("my len = %d\n", len);
    printf("-------------- TEST NO formatter DONE --------------\n");
    
    /* test without format specifier and escape char (BUG HERE) */
    len = printf("Percent:[%%%%%%]\n");
    printf("normal len = %d\n", len);
    len = _printf("Percent:[%%%%%%]\n");
    printf("my len = %d\n", len);
    printf("-------------- TEST Percent --------------\n");
    /* test with %% and \\ and %%%%% and \\\\ (BUG HERE) */
    len = printf("now i'm trying to %%%% \n");
    printf("normal len = %d\n", len);
    len = _printf("now i'm trying to %%%% \n");
    printf("my len = %d\n", len);
    printf("-------------- TEST Unknown char --------------\n");
    /* test with unknown char with % */
    len = printf("string with unknown char %q ...\n");
    printf("normal len = %d\n", len);
    len = _printf("string with unknown char %q ...\n");
    printf("my len = %d\n", len);
    
    printf("-------------- TEST UNKOWN FORMATTER --------------\n");
    /**/
    len = printf("Unknown:[%r]ahlemtest\n");
    printf("normal len = %d\n", len);
    len = _printf("Unknown:[%r]ahlemtest\n");
    printf("my len = %d\n", len);
    printf("-------------- TEST EDGE CASE --------------\n");
    /**/
    len = printf("now i'm trying to %%%% \" and \bomm and  \\ \n");
    printf("normal len = %d\n", len);
    len = _printf("now i'm trying to %%%% \" and \bomm and  \\ \n");
    printf("my len = %d\n", len);
    

    return (0);
}
