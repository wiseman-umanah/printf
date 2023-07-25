#include "main.h"
#include <stdlib.h>

/**
* handle_u - this handles the printing of unsigned int
* @num: the unsigned int
* @c: specifier
* Return: returns the length of printed num.
*/

int handle_u(char c, unsigned int num)
{
	int i;
	char *str;

	i = 0;
	if (c == 'o')
	{
		i = handle_oct(num);
		return (i);
	}
	str = _uint_to_str(num);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	return (i);
}
