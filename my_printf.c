#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints a provided string in addition to a list of variadic args
 * @format: the provided string with format specifiers
 *
 * Return: the number of characters in the final string
 * or return -1 in case of error
*/

int _printf(const char *format, ...)
{
	int count = 0;
	int func;
	int (*print_func)(va_list);
	va_list args;

	if (format)			/*check if format string exists*/
	{
		va_start(args, format);
		while (*format != '\0')
		{
			if (*format == '%')		/*check for beginning of format specifier*/
			{
				format++;		/*increment once to point to the specifier*/

				print_func = get_format(*format); /*pass char to get_format*/
				if (print_func != NULL) /*check if get_format was successful*/
				{
					func = print_func(args); /*store function from get_format*/
					if (func == -1) /*check for errors, return -1 on error*/
						return (-1);
					count += func; /*otherwise, increment char count*/
				}
			}
			else
			{
				putchar(*format); /*if no '% is found, print unaltered char'*/
				count++; /*and increment char count*/
			}
			format++; /*proceed to the next char in the string*/
		}
		va_end(args);
		return (count); /*return the final char count*/
	}
	return (-1); /*if no format string is found, return an error result*/
}
