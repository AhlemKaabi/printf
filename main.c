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
    int len;
    /* test for print char and len of printed chars */
    len = printf("variable test_char = %c ", test_char);
    printf("normal len = %d\n", len);
    len = _printf("variable test_char = %c ", test_char);
    printf("my len = %d\n", len);
    /* test for print char and len of printed chars */
    len = printf("variable test_string = %s ", test_string);
    printf("normal len = %d\n", len);
    len = _printf("variable test_string = %s ", test_string);
    printf("my len = %d\n", len);
    /* test for new line and len of printed chars */
    len = printf("variable test_char = %c\n", test_char);
    printf("normal len = %d\n", len);
    len = _printf("variable test_char = %c\n", test_char);
    printf("my len = %d\n", len);
    /* test without format specifier and escape char (BUG HERE) */
    len = printf("hello you are testing escape \" and \\ \n");
    printf("normal len = %d\n", len);
    len = _printf("hello you are testing escape \" and \\ \n");
    printf("my len = %d\n", len);
    /* test with %% and \\ and %%%%% and \\\\ (BUG HERE) */
    len = printf("now i'm trying to %%%% \n");
    printf("normal len = %d\n", len);
    len = _printf("now i'm trying to %%%% \n");
    printf("my len = %d\n", len);
    return (0);
}
