#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * _printf - A function that prints to the standard output.
 * @format: format string
 * @...: variable arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list bdl;
	int ch = 0;

	va_start(bdl, format);
	while (*format)
	{

		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int arg = va_arg(bdl, int);
				write(1, &arg, 1);
				ch++;
			}
			else if (*format == 's')
			{
				char *arg = va_arg(bdl, char*);
				while (*arg)
				{
					write(1, arg, 1);
					arg++;
					ch++;
				}
			}
			else if (*format == '%')
			{
				char percent = '%';
				write(1, &percent, 1);
				ch++;
			}
		}
		else
		{
			write(1, format, 1);
			ch++;
		}
	}
		format++;
		va_end(bdl);
		return (ch++);
}
