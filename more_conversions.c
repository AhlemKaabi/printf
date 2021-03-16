#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_rev - function that prints string in reverse
* @arg: argument of type va_list
* Return: length of printed string
*/
int print_rev(va_list arg)
{
	int i = 0;
	char *str;
	int len = 0;

	str = va_arg(arg, char *);
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	_putchar('\n');
	for (i = len; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (len);
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
