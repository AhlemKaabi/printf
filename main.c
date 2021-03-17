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
    // char test_char = 'A';
    // char *test_string = "²&é\"'(-è_çà)=azeriop78563wxvbn$ù!!;,:\"";
    // char *test_rot = "hello_holberton!;!:;";
    // int x = 1125;
    // // int y = 65;
    // int len;
    
    
    // len = printf("variable test_char = %c\n", test_char);
    // printf("normal len = %d\n", len);
    // len = _printf("variable test_char = %c\n", test_char);
    // printf("my len = %d\n", len);
    // _printf("-------------- TEST CHAR DONE --------------\n");    
    
    
    // len = printf("variable test_string = %s\n", test_string);
    // printf("normal len = %d\n", len);
    // len = _printf("variable test_string = %s\n", test_string);
    // printf("my len = %d\n", len);
    // _printf("-------------- TEST STRING DONE --------------\n");
    
   
    // len = printf("variable test_string = %d\n", x);
    // printf("normal len = %d\n", len);
    // len = _printf("variable test_string = %i\n", x);
    // printf("my len = %d\n", len);
    // _printf("-------------- TEST INT DONE --------------\n");

   	
    // len = printf("this string has no formatter\n");
    // printf("normal len = %d\n", len);
    // len = _printf("this string has no formatter\n");
    // printf("my len = %d\n", len);
    // printf("-------------- TEST NO formatter DONE --------------\n");
    
    
    // len = printf("Percent:[%%%%%%]\n");
    // printf("normal len = %d\n", len);
    // len = _printf("Percent:[%%%%%%]\n");
    // printf("my len = %d\n", len);
    // printf("-------------- TEST PERCENT DONE --------------\n");

    // _printf("Unknown:[%M]\n");
    // printf("-------------- TEST UNKOWN FORMATTER DONE--------------\n");
    
    
    // len = printf("now i'm trying to %%%% \" and \bomm and  \\ yoooo \n");
    // printf("normal len = %d\n", len);
    // len = _printf("now i'm trying to %%%% \" and \bomm and  \\ yoooo \n");
    // printf("my len = %d\n", len);
    // printf("-------------- TEST EDGE CASE DONE --------------\n");

    // len = printf("kkAAAAAAAAAAA\nMMMEEEEEEEEEEEEEEE\nAAAMMMMMEEEEE\nAAAAAAAAAAAAAAAA\n");
    // printf("normal len = %d\n", len);
    // len = _printf("kkAAAAAAAAAAA\nMMMEEEEEEEEEEEEEEE\nAAAMMMMMEEEEE\nAAAAAAAAAAAAAAAA\n");
    // printf("my len = %d\n", len);
    // printf("-------------- TEST EDGE CASE DONE --------------\n");
    
    // _printf("\'\n");
    // _printf("%\n");
    // printf("-------------- TEST TRIGGER ERRORS DONE --------------\n");
    
    // _printf("%b\n", 1024);
    // printf("-------------- TEST UNSIGNED INT DONE --------------\n");

    // _printf("A\n");
    // _printf("B\tC\n");
    // _printf("D\rE\n");
    // _printf("F\fG\n");
    // printf("-------------- TEST ESCAPE CHAR DONE --------------\n");

    
    // len = printf("hello holberton\n");
    // printf("normal len = %d\n", len);
    // len = _printf("%r\n", test_string);
    // printf("my len = %d\n", len);
    // _printf("%r\n", test_string);
    // printf("-------------- TEST REVERSE STRING DONE --------------\n");

    //   _printf("%R\n", test_string);
    //   _printf("%R\n", test_rot);
    // printf("-------------- TEST ROT13 DONE --------------\n");
    
    _printf("%b\n", 1024);
    _printf("%b\n", 9);
    _printf("%b\n", 0);
    printf("-------------- Test convert to binary --------------\n");
    return (0);
}
