#include "main.h"
#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * process_format - Process the format specifier and arguments.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 */
void process_format(const char **format, va_list args)
{
	int width, precision;
	(*format)++;
	if (**format == '%')
	{
		if (*(*format + 1) == '%')
		{
			(*format)++;
			print_char('%');
		}
		else
			print_percent();
	}
	else if (**format == 'c')
	{
		handle_c_edge_case(format, args);
	}
	else if (**format == 's')
	{
		(*format)++;
		width = 0;
		precision = -1;
		while (isdigit(**format))
		{
			width = width * 10 + (**format - '0');
			(*format)++;
		}
		if (**format == '.')
		{
			(*format)++;
			precision = 0;
			while (isdigit(**format))
			{
				precision = precision * 10 + (**format - '0');
				(*format)++;
			}
		}
		handle_s_edge_case(format, args, width, precision);
	}
	else
		print_char(**format);
}

