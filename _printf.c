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

	ssize_t bytes_written;

	int length;
	char buffer[1024]; /* Buffer to hold formatted output */

	// buffer[0] = '\0';

	va_start(args, format);

	length = vsnprintf(buffer, sizeof(buffer), format, args);

	va_end(args);

	if (length < 0)
	{
		perror("Error formatting output");
		return (-1);
	}

	bytes_written = write(STDOUT_FILENO, buffer, length);

	if (bytes_written == -1)
	{
		perror("Error writing to standard output");
		return (-1);
	}

	return (bytes_written);
}

