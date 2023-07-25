#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* handle_r - this function handles r and R specifier
* @c: the specifier
* @str: the string to work with
* Return: returns number of chars printed
*/

int handle_r(char c, char *str)
{
	int i, count;
	char *result = (char *)malloc(sizeof(char) * strlen(str));
	int j =  0;

	count = 0;
	if (c == 'R')
	{
		count += rot13(str);
	}
	else
	{
		if (result == NULL)
		{
			free(result);
			return (0);
		}
		for (i = (strlen(str) - 1); i >= 0; i--)
		{
			result[j] = str[i];
			_putchar(result[j]);
			j++;
			count++;
		}
	}
	return (count);
}

