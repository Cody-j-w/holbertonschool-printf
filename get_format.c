#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int (*get_format(char specifier))(va_list)
{

	int i = 0;
	formats_t formats[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_digit},
		{'i', print_digit},
		{'%', print_mod},
		{'\0', print_nothing},
		{'~', catch_all}
	};

	while (i < 6)
	{
		if (specifier == formats[i].spec)
		{
			return (formats[i].print_func);
		}

		i++;
	}
	putchar('%');
	putchar(specifier);
	return (formats[i].print_func);
}
