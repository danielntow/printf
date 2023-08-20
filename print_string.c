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
	int printed_chars = 0;

	if (str == NULL)
	{

		str = "(null)";
	}

	while (*str)
	{
		_putchar(*str);
		str++;
		printed_chars++;
	}

	return (printed_chars);
}




