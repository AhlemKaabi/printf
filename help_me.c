#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* alloc_len - calculate how many digits in resut contain
* @num: number to be converted
* @base: which base to convert too
* Return: number of bytes to allocate.
**/
int alloc_len(int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}
/**
* itoa - convert integer to a base and store in string
* @num: number to be converted
* @base: which base to convert too
* @str: result will be stored
* Return: pointer to str.
**/
char *itoa(unsigned int num, char *str, int base)
{
	unsigned int i;

	if (base == 2)
	{
		for (i = 0; num > 0; i++)
		{
			if (num % 2 == 0)
			{
				str[i] = '0';
			}
			else
			{
				str[i] = '1';
			}
			num = num / 2;
		}
	}
	return (str);
}
/**
* _memcpy - copy memory area
* @dest: Destination for copying
* @src: Source to copy from
* @n: The number of bytes to copy
* Return: The _memcpy() function returns a pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
