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
	if (str == NULL)
	{
		str = "(null)";
	}

	int count = 0;

	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}

	return (count);
}

