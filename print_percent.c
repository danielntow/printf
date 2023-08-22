#include "main.h"
#include <unistd.h>

/**
 * print_percent - Print the '%' character to standard output.
 *
 * Return: number of characters printed
 */
int print_percent(void)
{
	char percent = '%';

	write(1, &percent, 1);

	return (1);
}

