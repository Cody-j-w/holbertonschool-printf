#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_format - gets the appropriate function for the provided format character
 * @specifier: the provided format character
 *
 * Return: a pointer to the appropriate function
*/

int (*get_format(char specifier))(va_list)
{

	int i = 0;
	/**
	 * declare and initialize an array of structs.
	 * each struct contains a specifier character and its associated function.
	 * in the case of catch_all, its placement in the array and the character
	 * used ensure that it won't be accidentally hit.
	*/
	formats_t formats[] = {
		{'s', print_string}, 
		{'c', print_char},
		{'d', print_digit},
		{'i', print_digit},
		{'%', print_mod},
		{'\0', print_nothing},
		{'~', catch_all} /*only in array for convenience of declaration*/
	};

	while (i < 6) /*cannot hit '~' case by design*/
	{
		if (specifier == formats[i].spec)
		{
			return (formats[i].print_func);
		}

		i++;
	}
	/**if all other checks fail, then exit loop, print a '%' and the current
	 * character, and return the catch_all function, which just returns 2.
	*/
	putchar('%');
	putchar(specifier);
	return (catch_all);
}
