#include "main.h"
#include <stdarg.h>

/**
 * process_format - Process the format specifier and arguments.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 */
void process_format(const char **format, va_list args)
{
	(*format)++; /* Move past '%' */

	switch (**format)
	{
	case 'c':
		handle_c_edge_case(format, args);
		break;
	case 's':
		handle_s_edge_case(format, args);
		break;
	case '%':
		handle_percent_edge_case(format, args);
		break;
	default:
		print_char('%');
		print_char(**format);
		break;
	}
}


