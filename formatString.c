#include "main.h"

/**
* handle_s - this function will handle all strings
*
* @str: pointer to string
* Return: returns total number of string printed
*/

int handle_s(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	return (i);
}
