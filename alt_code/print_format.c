#include "main.h"

/**
 * print_char - A function that prints a character
 * @list: argument list
 * Return: returns characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
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
}
/**
 * print_percent - A function that prints a % symbol
 * @list: argument list
 * Return: number of characters printed.
 */
int print_percent(va_list list)
{
	(void)va_list;
	_putchar('%');
	return (1);
}

/**
 * print_integer - A function that prints an integer
 * @list: argument list
 * Return: number of characters printed
 */
int print_integer(va_list list)
{
	int num_size;

	num_size = print_number(list);
	return (num_size);
}
/**
 * unsigned_integer - A function that prints unsigned integers.
 * @list: argument list
 * Return: number printed
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (print_unsigned_number(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
}
