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
	int i;

	i = 0;
	if (c == 'S')
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
