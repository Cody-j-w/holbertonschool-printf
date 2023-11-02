#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list args;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            (*get_format(*format))(args);
        }

    }
    return (0);
}