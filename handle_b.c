#include <stdlib.h>
#include "main.h"

/**
* handle_bin - this function handles %b for binary
* @num: unsigned int
* Return: count of printed number
*/

int handle_bin(unsigned int num)
{
	int rem, count, i;
	int j = 0;
	int *str = malloc((sizeof(int) * 100) + 1);

	if (str == 0)
		return (0);
	str[0] = 0;
	if (num == 0)
	{
		j = _putchar('0');
		free(str);
		return (j);
	}
	while (num != 0)
	{
		rem = num % 2;
		str[j] = rem + 48;
		j++;
		num /= 2;
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
