#include "main.h"

/**
* handle_s - this function will handle all strings
*
* @str: pointer to string
* @c: specifier
* Return: returns total number of string printed
*/

int handle_s(char c, char *str)
{
	int i, j;
	char err[7] = "(null)";

	i = 0;
	j = 0;
	if (str == NULL)
	{
		while (err[j] != '\0')
		{
			_putchar(err[j]);
			j++;
			i++;
		}
	}
	else if (c == 'S' && str != NULL)
	{
		i += handle_S(str);
	}
	else
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
			i++;
		}
	}
	return (i);
}
