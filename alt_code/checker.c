#include "main.h"

/**
 * check_ed - A function that check for combine code and strings.
 * @format: string of characters
 * @f_list: list of functions
 * @arg_list: Argument list
 * Return: number of characters printed.
 */
int check_ed(const char *format, conver_t f_list[], va_list arg_list)
{
	int x, y, r_val, printed_chars;

	printed_chars = 0;
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0; f_list[y].sym != NULL; y++)
			{
				if (format[x + 1] == f_list[y].sym[0])
				{
					r_val = f_list[y].f(arg_list);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (f_list[y].sym == NULL && format[x + 1] != ' ')
			{
				if (format[x + 1] != '\0')
				{
					_putchar(format[x]);
					_putchar(format[x + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			x = x + 1;
		}
		else
		{
			_putchar(format[x]);
			printed_chars++;
}
	}
	return (printed_chars);
}
