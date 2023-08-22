#include "main.h"
#include <unistd.h>

/**
 * print_char - Print a single character to standard output.
 * @c: The character to be printed.
 *
 * Return: length of func
 */
int print_char(char c)
{

	write(1, &c, 1);

	return (1);
}

