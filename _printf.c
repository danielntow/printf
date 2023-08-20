#include <stdarg.h>
#include "main.h"
#include <stddef.h>

/**
 * _printf - Print formatted output to standard output.
 * @format: The format string.
 * @...: Additional arguments for format placeholders.
 * Return: Number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{ return (-1);
	}

	while (*format)
	{
		if (*format == '%')
		{
			process_format(&format, args);
		}
		else
		{
			print_char(*format);
		}

		format++;
	}

	va_end(args);
	return (0);
}
