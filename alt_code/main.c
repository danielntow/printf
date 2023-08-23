#include "main.h"
#include <stdio.h>

int main(void)
{
	int count;

	printf("Running test cases for _printf function...\n\n");

	/* Test Case 1: Basic formatting */
	count = _printf("Hello, world!\n");
	printf("Test Case 1: Expected output:\nHello, world!\n");
	printf("Test Case 1: Characters printed: %d\n\n", count);

	/* Test Case 2: Using format specifiers */
	count = _printf("Integer: %d, String: %s, Character: %c\n", 42, "Hello", 'A');
	printf("Test Case 2: Expected output:\nInteger: 42, String: Hello, Character: A\n");
	printf("Test Case 2: Characters printed: %d\n\n", count);

	/* Test Case 3: Using %% to print % */
	count = _printf("Printing a percent symbol: %%\n");
	printf("Test Case 3: Expected output:\nPrinting a percent symbol: %\n");
	printf("Test Case 3: Characters printed: %d\n\n", count);

	/* Test Case 4: NULL string argument */
	count = _printf("NULL string: %s\n", NULL);
	printf("Test Case 4: Expected output:\nNULL string: (null)\n");
	printf("Test Case 4: Characters printed: %d\n\n", count);

	/* Test Case 5: Printing numbers */
	count = _printf("Decimal: %d, Octal: %o, Hexadecimal: %x, Hexadecimal (uppercase): %X\n", 42, 42, 42, 42);
	printf("Test Case 5: Expected output:\nDecimal: 42, Octal: 52, Hexadecimal: 2a, Hexadecimal (uppercase): 2A\n");
	printf("Test Case 5: Characters printed: %d\n\n", count);

	/* Test Case 6: Error cases */
	count = _printf("Invalid specifier: %q\n");
	printf("Test Case 6: Expected output:\nInvalid specifier: %q\n");
	printf("Test Case 6: Characters printed: %d\n\n", count);

	printf("All test cases completed.\n");

	return (0);
}
