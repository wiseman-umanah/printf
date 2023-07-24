#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* _printf - same function as printf()
* @format: format string
*
* Return: returns the length of string
*/

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c' || *format == '%')
				count += handle_per_n_char(va_arg(args, int));
			else if (*format == 's')
				count += handle_s(va_arg(args, char *));
			else if (*format == 'd' || *format == 'i')
				count += handle_d(va_arg(args, int));
			else if (*format == 'u')
				count += handle_u(va_arg(args, unsigned int));
			else if (*format == 'o')
				count += handle_oct(va_arg(args, unsigned int));
			else if (*format == 'b')
				count += handle_bin(va_arg(args, unsigned int));
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
