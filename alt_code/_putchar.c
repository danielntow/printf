#include "main.h"

/**
 * _putchar - A function that writes a single character to the standard output.
 * @c: character about to be written.
 * Return: character c on success and -1 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
