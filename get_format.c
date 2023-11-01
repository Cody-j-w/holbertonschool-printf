#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

void (*get_format(char specifier))(va_list)
{

    int i = 0;
    format_t formats = {
        {'s', print_string},
        {'c', print_char},
        {'d', print_digit},
        {'i', print_digit},
        {NULL, NULL}
    };

    while (formats[i].spec != NULL)
    {
        if (specifier == formats[i].spec)
            
    }
}