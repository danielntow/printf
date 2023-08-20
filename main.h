#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* print_char.c */
void print_char(char c);

/* print_string.c */
void print_string(const char *str);

/* print_percent.c */
void print_percent(void);

/* process_format.c */
void process_format(const char **format, va_list args);

/* my_printf.c */
int _printf(const char *format, ...);

#endif /* MAIN_H */

