#include <stdlib.h>
#include "main.h"

/**
* handle_oct - This will handle all %o
* @num: the num to convert to octal format
* Return: return length of num
*/

int handle_oct(unsigned int num)
{
	int rem, count, i;
	int j = 0;
	int *str = malloc((sizeof(int) * 12) + 1);

	if (str == NULL)
		return (NULL);
	str[0] = 0;
	while (num != 0)
	{
		rem = num % 8;
		str[j] = rem + 48;
		j++;
		num /= 8;
	}
	count = 0;
	i = j - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
		count++;
	}
	free(str);
	return (count);
}
