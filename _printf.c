#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - like printf
 *
 * @format: number of arguments
 *
 * Return: void
 *
 **/

int _printf(const char *format, ...)
{

	va_list ap;

	unsigned int i, result;

	result = 0;

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			result += p_p(format[i + 1], &ap);
			i++;
		}
		else
		{
			_putchar(format[i]);
			result++;
		}
	}

	va_end(ap);

	return (result);
}
