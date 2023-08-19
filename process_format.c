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
		print_char(va_arg(args, int));
		break;
	case 's':
		print_string(va_arg(args, char*));
		break;
	case '%':
		print_percent();
		break;
	default:
		print_char('%');
		print_char(**format);
		break;
	}
}

