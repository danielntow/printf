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
	(*format)++;
	if (**format == '%')
	{
		_putchar('%'); /* Print a single '%' character */
		(*format)++;   /* Move past the second '%' character */
		return;	       /* Return without further processing */
	}
	else if (**format == 'c')
	{
		handle_c_edge_case(format, args);
	}
	else if (**format == 's')
	{
		handle_s_edge_case(format, args);
	}
	else
	{
		_putchar('%');
		_putchar(**format);
	}
}

