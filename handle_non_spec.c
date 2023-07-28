#include "main.h"

/**
* handle_non_spec - for handling non specifiers
* @c: character
* Return: num of char printed
*/

int handle_non_spec(char c)
{
	int i = 0;

	if (c == '%')
		i += _putchar('%');
	else
	{
		i += _putchar('%');
		i += _putchar(c);
	}
	return (i);
}
