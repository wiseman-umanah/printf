#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _int_to_str - changes integer to string
* @num: number to change to string
*
* Return: returns pointer to string
*/

char *_int_to_str(int num)
{
	char *str = (char *)malloc(11);

	if (str == NULL)
		return (NULL);
	sprintf(str, "%d", num);
	return (str);
}
