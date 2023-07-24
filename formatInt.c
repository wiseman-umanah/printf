#include "main.h"

/**
* handle_d - This function is for integer handling
*
* @num: number to be printed
* Return: returns the total number of string
*/

int handle_d(int num)
{
	char *str = _int_to_str(num);
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
