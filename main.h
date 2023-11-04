#ifndef HEADER
#define HEADER
#include <stdarg.h>

typedef struct formats
{
	char spec;
	int (*print_func)(va_list);
} formats_t;

int _printf(const char *, ...);
int (*get_format(char))(va_list);
int print_char(va_list);
int print_string(va_list);
int print_digit(va_list);
int print_mod(va_list);
int print_nothing(va_list);
int catch_all(va_list);
int _putchar(char);
int putint(int);


#endif
