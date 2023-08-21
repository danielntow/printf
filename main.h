#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* _putchar.c */
int _putchar(char c);

/* print_string.c */
int print_string(const char* str);

/* print_char.c */
void print_char(char c);

/* print_percent.c */
void print_percent(void);

/* process_format.c */
void process_format(const char** format, va_list args);

/* check_edge_cases.c */
int check_edge_cases(const char** format, va_list args);
int handle_c_edge_case(const char** format, va_list args);
int handle_s_edge_case(const char** format, va_list args, int width,
		       int precision);
int handle_percent_edge_case(const char** format, va_list args);

/* _printf.c */
int _printf(const char* format, ...);

#endif /* MAIN_H */

