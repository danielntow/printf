#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct convert - A function that defines a structure
 * @sym: operator
 * @f: function pointer
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t:



/* _printf.c */
int _printf(const char *format, ...);

/* _putchar.c */
int _putchar(char c);

/* print_string.c */
int print_string(va_list list);

/* print_char.c */
int print_char(va_list list);

/* print_percent.c */
int print_percent(va_list list);

/* print_reversedc */
int print_reversed(va_list arg);

/* utility.c */
char *rev_string(char *s);
void print_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);

/* checker.c */
int check_ed(const char *format, conver_t f_list[], va_list arg_list);


#endif /* MAIN_H */
