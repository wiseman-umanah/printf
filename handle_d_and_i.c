#include "main.h"
#include <stdlib.h>

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
	char *temp;

	i = 0;
	temp = str;
	if (temp == NULL)
	{
		free(str);
		return (i);
	}
	while (*temp != '\0')
	{
		_putchar(*temp);
		temp++;
		i++;
	}
	free(str);
	return (i);
}
