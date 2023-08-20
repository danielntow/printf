#include "main.h"
#include <stdarg.h>

/**
 * check_edge_cases - Check for edge cases in the format string.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 * Return: -1 if an edge case is encountered, 0 otherwise.
 */
int check_edge_cases(const char **format, va_list args)
{
	(void)args;

	if (**format == ' ')
	{
		(*format)++;
		return (-1);
	}
	else if (**format == '\0')
	{
		(*format)++;
		return (-1);
	}
	else
	{
		return (0);
	}
}

