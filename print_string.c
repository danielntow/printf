#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - Print a string to the standard output
 * @str: The input string
 *
 * Return: The number of characters printed
 */
void print_string(const char *str)
{
	if (str)
	{
		while (*str)
		{
			write(1, str, 1);
			str++;
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
		}
	}
}


