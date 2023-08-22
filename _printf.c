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
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++; /* Move past the '%' character */

			if (*format == '%')
				printed_chars += _putchar('%');
			else if (*format == 'c')
				printed_chars +=
				    handle_c_edge_case(&format, args);
			else if (*format == 's')
				printed_chars +=
				    handle_s_edge_case(&format, args);
			else
			{
				printed_chars += _putchar('%');
				printed_chars += _putchar(*format);
			}
		}
		else
			printed_chars += _putchar(*format);

		format++;
	}

	va_end(args);
	return (printed_chars);
}
