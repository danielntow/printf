#include "main.h"
#include <stdarg.h>
#include <stdio.h>
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
		va_arg(args, int); /* Consume argument for 'c' specifier */
}
else if (**format == 's')
{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
				_printf("(null)");
		}
}
else if (**format == '%')
{
		va_arg(args, int); /* Consume argument for '%' specifier */
}
else
{
		/* Invalid format specifier, print a warning message */
		_printf("Warning: Invalid format specifier '%c'\n", **format);
}

return (0);
}
