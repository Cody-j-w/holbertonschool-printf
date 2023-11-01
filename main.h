#include <stdarg.h>
#ifndef HEADER
#define HEADER


typedef struct formats {
    void (*print())(va_list);
    char spec;
} formats_t;

int _printf(const char *, ...);
void (*get_format(char))(va_list);


#endif