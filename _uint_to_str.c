#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _uint_to_str - changes an unsigned int to a string
* @num: unsigned integer value
* Return: returns str to another function
*/

char *_uint_to_str(unsigned int num)
{
	char *str = (char *)malloc(12);

	if (str == NULL)
		return (NULL);
	sprintf(str, "%u", num);
	return (str);
}
