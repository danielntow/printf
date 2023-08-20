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
	int spec_count = 0;
	int arg_count = 0;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}

	while (*format)
	{
		if (*format == '%')
		{
			spec_count++;
			process_format(&format, args);
			arg_count++;
		}
		else
		{
			print_char(*format);
		}

		format++;
	}

	va_end(args);
	if (spec_count != arg_count)
	{
		fprint(stderr, "Error: Format and argument specifeir number mismatch\n");
		return (-1);
	}
	return (0);
}
