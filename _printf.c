#include <stdarg.h>
#include "main.h"

/**
 * _printf - Print formatted output to standard output.
 * @format: The format string.
 * @...: Additional arguments for format placeholders.
 * Return: Number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int chtrack = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			chtrack += process_format(&format, args);
		}
		else
		{
			print_char(*format);
			chtrack++;
		}

		format++;
	}

	va_end(args);
	return (chtrack);
}
