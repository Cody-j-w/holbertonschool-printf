#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints a provided string in addition to a list of variadic args
 * @format: the provided string with format specifiers
 *
 * Return: the number of characters in the final string
*/

int _printf(const char *format, ...)
{
	int count = 0;
	int func;
	int (*print_func)(va_list);
	va_list args;

	if (format)
	{
		va_start(args, format);
		while (*format != '\0')
		{
			if (*format == '%')
			{
				format++;
				print_func = get_format(*format);
				if (print_func != NULL)
				{
					func = print_func(args);
					if (func == -1)
						return (-1);
					count += func;
				}
			}
			else
			{
				putchar(*format);
				count++;
			}
			format++;
		}
		va_end(args);
		return (count);
	}
	return (-1);
}
