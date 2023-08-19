#include "main.h"
#include <unistd.h>

/**
 * print_char - Print a single character to standard output.
 * @c: The character to be printed.
 */
void print_char(char c)
{
	 write(1, &c, 1);
}

