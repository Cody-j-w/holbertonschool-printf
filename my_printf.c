#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - prints a provided string in addition to a list of variadic args
 * @format: the provided string with format specifiers
 * 
 * Return: the number of characters in the final string
*/

int _printf(const char *format, ...)
{
    va_list args;

    va_start(format, args);

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