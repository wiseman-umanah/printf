#include "main.h"

/**
* handle_per_n_char - handles string of char datatype
* @c: the character
* Return: returns the count of character printed.
*/

int handle_per_n_char(char c, char arg)
{
	int i;

	i = 0;
	if (c == '%')
	{
		_putchar('%');
		i++;
	}
	else
	{
		_putchar(arg);
		i++;
	}
	return (i);
}
