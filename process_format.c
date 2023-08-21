#include "main.h"
#include <stdarg.h>

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
		if (*(*format + 1) == '%') /* Check for '%%' escape sequence */
		{
			(*format)++; /* Move past the second '%' character */
			print_char('%');
		}
		else
		{
			print_percent(); /* Call the function to print '%' */
		}
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
		print_char('%'); /* Print the '%' character */
				 /* Print the invalid specifier character */
		print_char(**format);
	}
}



