#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_char - prints a character
 * @args: arguments to format data type
 * Return: Number of characters printed (should be 1)
 */

int print_char(va_list args)
{
	char ch = va_arg(args, int);

	putchar(ch);
	return (1);
}
