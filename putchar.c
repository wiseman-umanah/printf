#include <unistd.h>
#include "main.h"

/**
* _putchar - Too print characters to stdout
* @c: character to be print
*
* Return: prints c to stdout
*/

int _putchar(int c)
{
	return (write(1, &c, 1));
}

