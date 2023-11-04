#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int count = 0;
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
					else
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
