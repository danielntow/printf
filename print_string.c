#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - Print a string to the standard output
 * @str: The input string
 *
 * Return: The number of characters printed
 */
int print_string(const char *str)
{
	int chars_printed = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	if (str)
	{
		while (*str)
		{
			write(1, str, 1);
			str++;
			chars_printed++;
		}
	}
	else
	{
		/* Edge case: Null pointer for strings (%s) */
		const char *nullString = "(null)";

		while (*nullString)
		{
			write(1, nullString, 1);
			nullString++;
			chars_printed++;
		}
	}

	return (chars_printed);
}


