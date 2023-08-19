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
			switch (*format)
			{
			case 'c':
			{
				int arg;

				arg = va_arg(args, int);
				write(1, &arg, 1);
				break;
			}
			case 's':
			{
				char *arg;

				arg = va_arg(args, char*);
				while (*arg)
				{
					write(1, *&arg, 1);
					arg++;
				}

				break;
			}
			case '%':
			{
				char percent = '%';

				write(1, &percent, 1);
				break;
			}
			case 'd':
			case 'i':
			{
				int arg;

				arg = va_arg(args, int);

				write(1, &arg, 1);

				break;
			}
			default:
				write(1, format, 1);
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


