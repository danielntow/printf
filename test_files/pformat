#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * process_format - Process the format specifier and arguments.
 * @format: Pointer to the format specifier in the format string.
 * @args: The variable arguments list.
 */
void process_format(const char **format, va_list args)
{
	int c;
	char *str;

	(*format)++; /* Move past '%' */

	switch (**format)
	{
	case 'c':
	{
		c = va_arg(args, int);
		if (c < 0 || c > 255)
		{
			fprintf(stderr, "Invalid argument type error for %%c\n");
			return;
		}
		print_char(c);
		/* Edge case: Invalid argument type for %c specifier */
		print_char((char)va_arg(args, int));
		break;
	}
	case 's':
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			fprintf(stderr, "Erro: NULL argument for%%s\n");
			return;
		}
		print_string(str);
		break;
	}
	case '%':
		print_percent();
		break;
	default:
		/* Edge case: Unrecognized specifier */
		print_char('%');
		print_char(**format);
		break;
	}
}
