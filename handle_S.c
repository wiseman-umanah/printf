#include "main.h"

/**
* handle_S - prints a string with custom formatting
*
* @str: string to be formatted
* Return: number of chars printed
*/

int handle_S(char *str)
{
	int i = 0, count = 0;
	char c;

	while (str[i])
	{
		c = str[i];
		if ((c > 0 && c  < 32) || c >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar('0');
			count += dec_to_hex('X', (unsigned int)c);
		}
		else
		{
			count += _putchar(c);
		}
		i++;
	}
	return (count);
}
