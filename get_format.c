#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int (*get_format(char specifier))(va_list)
{

	int i = 0;
	formats_t formats[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_digit},
		{'i', print_digit},
		{'\0', NULL}
	};

	while (formats[i].spec != '\0')
	{
		if (specifier == formats[i].spec)
		{
			return (formats[i].print_func);
		}

		i++;
	}
}
