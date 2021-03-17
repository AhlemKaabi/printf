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

char *itoa(int num, char *str, int base)
{
	int i = 0;
	int isNegative = 0;

	/* Handle 0 explicitely, otherwise empty string is printed for 0 */
	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	/* In standard itoa(), negative numbers are handled only with */
	if (num < 0 && base == 10)
	{
		isNegative = 1;
		num = -num;
	}

	/* Process individual digits */
	while (num != 0)
	{
		int rem = num % base;

		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}

	/* If number is negative, append '-' */
	if (isNegative == 1)
		str[i++] = '-';

	str[i] = '\0'; /* Append string terminator */

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
