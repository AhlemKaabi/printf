#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char test = 'A';
    int len;
    
    len = printf("variable is %c test = ", test);
    printf("normal len = %d\n", len);
    len = _printf("variable is %c test = ", test);
    printf("my len = %d\n", len);

    
    return (0);
}
