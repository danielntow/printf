#include "main.h"
#include <stdio.h>

/**
 * test_printf_cases - Run various test cases for the _printf function.
 */
void test_printf_cases(void)
{
	char *string_with_percent;

	printf("Running test cases for _printf function...\n\n");



	_printf("Test Case 1: Hello %% world\n");
	_printf("Test Case 2: 100%%\n");
	_printf("Test Case 3: Empty format: %s\n", "");
	_printf("Test Case 4: Single character: %c\n", 'A');
	_printf("Test Case 5: No specifier: Hello, world!\n");
	_printf("Test Case 6: Multiple %%%% characters: %%%% Hello %%%%\n");
	_printf("Test Case 7: NULL format: %s\n", NULL);


	_printf("Test Case 8: NULL string: %s\n", NULL);
	_printf("Test Case 9: Print '%%s' without arguments: %%s\n");
	_printf("Test Case 10: Print '%%c' without arguments: %%c\n");
	_printf("Test Case 11: Print '%%d' without arguments: %%d\n");

	string_with_percent = "Hello %% world";

	_printf("Test Case 12: String with %%%%: %s\n", string_with_percent);
	_printf("Test Case 13: Print character %%c: %c\n", '%');
	_printf("Test Case 14: Print integer %%d: %d\n", 12345);

	printf("\nAll test cases completed.\n");
}

/**
 * main - testing print cases
 * Return: 0 (complete)
 */

int main(void)
{
	test_printf_cases();
	return (0);
}
