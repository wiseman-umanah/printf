#include "main.h"

/**
* handle_per_n_char - handles string of char datatype
* @c: the character
* Return: returns the count of character printed.
*/

int handle_per_n_char(char c)
{
	int i;

	i = 0;
	if (c == '0')
	{
		_putchar('%');
		i++;
	}
	else
	{
		_putchar(c);
		i++;
	}
	return (i);
}
