#include "main.h"
#include <stdarg.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)

/**
 * handle_c_edge_case - Handle edge cases for 'c' specifier.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 * Return: Always returns 0.
 */
int handle_c_edge_case(const char **format, va_list args)
{
	char c;

	(void)format;
	/* (void)args; */

	c = (char)va_arg(args, int); /* Consume argument for 'c' specifier */
	_putchar(c);
	/* (*format)++; */
	return (0);
}

/**
 * handle_s_edge_case - Handle edge cases for 's' specifier.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 *
 *
 * Return: Always returns 0.
 */
int handle_s_edge_case(const char **format, va_list args)
{
	char *str;
	int len, i;

	(void)format;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		_printf("(null)");
		return (0);
	}
	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] == '%')
		{
			if (i + 1 < len && str[i + 1] != '%')
			{
				_putchar('%'); /* Print '%' character as is */
			}
			/* Skip the current '%' character since it's followed by * % */
			i++;
		}
		else
		{
			_putchar(str[i]);
			/* Print characters up to the specified length */
		}
	}
	return (0);
}

/**
 * handle_percent_edge_case - Handle edge cases for '%' specifier.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 * Return: Always returns 0.
 */
int handle_percent_edge_case(const char **format, va_list args)
{

	(void)args;
	_putchar(**format); /* Print the '%' character itself */
	(*format)++; /* Move past the '%' character in the format string */
	return (0);
}

/**
 * check_edge_cases - Check for edge cases in the format string.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 * Return: -1 if an edge case is encountered, 0 otherwise.
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
		_printf("Warning: Invalid format specifier '%c'\n", **format);
	}

	return (0);
}

