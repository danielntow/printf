#include "main.h"

/**
 * _printf - A function Prints a that prints a variety of formats to the standard ouput.
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chard;

	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	printed_char ==
