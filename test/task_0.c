#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char myChar = 'X';
	char myString[] = "Hello, World!";

	_printf("Printing a character: %c\n", myChar);
	_printf("Printing a string: %s\n", myString);
	_printf("Printing a percent sign: %%\n");

	return (0);
}

