#include <stdarg.h>
#ifndef HEADER
#define HEADER


typedef struct formats {
    char spec;
    int (*print_func)(va_list);
} formats_t;

int _printf(const char *, ...);
int (*get_format(char))(va_list);
int print_char(va_list);
int print_string(va_list);
int print_digit(va_list);


#endif
