
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct print_specifier - struct for print specifier
 * @specifier: the format specifier
 * @function: the function to handle the specifier
 */
typedef struct print_specifier
{
	char specifier;
	int (*function)(va_list);
} print_specifier;

int _printf(const char* format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int (*get_print_func(const char c))(va_list);
int _putchar(char c);

#endif /* MAIN_H */



