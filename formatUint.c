#include "main.h"
#include <stdlib.h>

/**
* handle_u - this handles the printing of unsigned int
* @num: the unsigned int
* Return: returns the length of printed num.
*/

int handle_u(unsigned int num)
{
	char *str = _uint_to_str(num);
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
