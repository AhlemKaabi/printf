#include <math.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _putchar(char c)
{
    return (write(1, &c, 1));
}
/**
 * rot13 - encode a string using rot13
 * @s: string.
 * Return: string.
 */
int print_rot13(va_list arg)
{
    int i = 0;
    int j;
    char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    char *str;
    str = va_arg(arg, char *);
    while (*(str + i) != '\0')
    {
        for (j = 0; j <= 51; j++)
        {
            if (*(str + i) == normal[j])
            {
                _putchar(rotated[j]);
                break;
            }
            else if (*(str + i) == ' ')
            {
                _putchar(' ');
                break;
            }
        }
        i++;
    }
    return (i);
}
int variadic(const char * format, ...)
{
    int t;
    va_list arg;
    va_start(arg, format);
    t = print_rot13(arg);
    va_end (arg);
    return (t);
}
int main(void)
{
    char *c = "hello people";
    int test;
    test = variadic("test",c);
    return (0);
}