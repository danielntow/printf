#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Function prototypes */
int _printf(const char *format, ...);
void process_format(const char **format, va_list args);
int print_string(const char *str);
void print_char(char c);
void print_percent(void);
int _putchar(char c);
int check_edge_cases(const char **format, va_list args);
/* Restore the args parameter */

#endif /* MAIN_H */

