#include "main.h"
#include <unistd.h>

/**
 * print_percent - Print the '%' character to standard output.
 */
void print_percent(void)
{
	char percent = '%';

	write(1, &percent, 1);
}

