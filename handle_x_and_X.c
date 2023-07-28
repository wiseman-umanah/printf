#include "main.h"

/**
* dec_to_hex - change from decimal to hexadecimal
* @c: specifier
* @num: the decimal number
*
* Return: return the number of chars printed
*/

int dec_to_hex(char c, unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		count = _putchar('0');
		return (count);
	}
	if (!num)
		return (0);
	count += dec_to_hex(c, num / 16);
	if (num % 16 < 10)
		count += _putchar('0' + num % 16);
	else if (num % 16 > 9 && c == 'x')
		count += _putchar(87 + num % 16);
	else
		count += _putchar(55 + num % 16);
	return (count);
}
