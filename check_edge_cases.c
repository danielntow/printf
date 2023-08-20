#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>

#define UNUSED(x) (void)(x)

/**
 * handle_c_edge_case - Handle edge cases for 'c' specifier.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 * Return: (0).
 */
int handle_c_edge_case(const char **format, va_list args)
{
	UNUSED(format);
	va_arg(args, int); /* Consume argument for 'c' specifier */
	return (0);
}

/**
 * handle_s_edge_case - Handle edge cases for 's' specifier.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 * Return: (0).
 */
int handle_s_edge_case(const char **format, va_list args)
{
	UNUSED(format);
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		_printf("(null)");
	}
	return (0);
}

/**
 * handle_percent_edge_case - Handle edge cases for '%' specifier.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 * Return: (0).
 */
int handle_percent_edge_case(const char **format, va_list args)
{
	UNUSED(format);
	va_arg(args, int); /* Consume argument for '%' specifier */

	if (*(*format + 1) == '%')
	{
		(*format)++; // Move past the second '%' character
	}
	else if (*(*format + 1) == 'n')
	{
		va_arg(args, int*); // Consume argument for '%n' specifier
	}

	return (0);
}

/**
 * check_edge_cases - Check for edge cases in the format string.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 * Return: (-1) if an edge case is encountered, (0) otherwise.
 */
int check_edge_cases(const char **format, va_list args)
{
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
	else if (**format == 'c')
	{
		return (handle_c_edge_case(format, args));
	}
	else if (**format == 's')
	{
		return (handle_s_edge_case(format, args));
	}
	else if (**format == '%')
	{
		return (handle_percent_edge_case(format, args));
	}
	else
	{
		/* Invalid format specifier, print a warning message */
		_printf("Warning: Invalid format specifier '%c'\n", **format);
	}

	return (0);
}



