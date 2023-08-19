#include "main.h"
#include <unistd.h>

/**
 * print_string - Print a null-terminated string to standard output.
 * @str: The string to be printed.
 */
void print_string(const char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

