#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable arguments
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{
				int arg = va_arg(args, int);

				write(1, &arg, 1);
			}
			else if (*format == 's')
			{
				char *arg = va_arg(args, char*);

				while (*arg)
				{
					write(1, arg, 1);
					arg++;
				}
			}
			else if (*format == '%')
			{
				char percent = '%';

				write(1, &percent, 1);
			}
			else
			{
				write(1, format - 1,
				      1); /* Print the '%' character */
				write(1, format,
				      1); /* Print the unrecognized character */
			}
		}
		else
		{
			write(1, format, 1);
		}

		format++;
	}

	va_end(args);
	return (0);
}
