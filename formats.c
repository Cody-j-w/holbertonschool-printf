#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_string - prints a string
 * @args: arguments to format data type
 * Return: Number of characters printed (null byte excluded)
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	if (str == NULL)
	{
		return (-1);
	}
	fputs(str, stdout);
	return (0);
}

/**
 * print_char - prints a character
 * @args: arguments to format data type
 * Return: Number of characters printed (should be 1)
 */

int print_char(va_list args)
{
	char ch = va_arg(args, int);
	putchar(ch);
	return (0);
}

/**
 * print_digit - prints an integer
 * @args: arguments to format data type
 * Return: Number of characters printed (should be 1)
 */

int print_digit(va_list args)
{
	int digit = va_arg(args, int);
	putchar('0' + digit);
	return (0);
}
