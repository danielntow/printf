#include "main.h"
#include <stdarg.h>

/**
 * _printf - Print formatted output to standard output.
 * @format: The format string.
 * @...: Additional arguments for format placeholders.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				print_percent();

			if (check_edge_cases(&format, args) == -1)
			{
				va_end(args);
				return (-1);
			}

			process_format(&format, args);
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}

		format++;
	}

	va_end(args);
	return (printed_chars);
}

