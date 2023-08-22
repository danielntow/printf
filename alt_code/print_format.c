#include "main.h"

/**
 * print_char - A function that prints a character
 * @list: argument list
 * Return: returns characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1):
}

/**
 * print_string - A function that prints a string
 * @list: argument list
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	int x = 0;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	while (str[x] != '/0')
	{
		x++;
		_putchar(str[x]);
	}
	return (x);

