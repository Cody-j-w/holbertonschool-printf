#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_string - prints a string
 * @args: arguments to format data type
 * Return: void
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char*);
	puts(str);
}

/**
 * print_char - prints a character
 * @args: arguments to format data type
 * Return: void
 */

void print_char(va_list args)
{
	char ch = va_arg(args, int);
	putchar(ch);
}

/**
 * print_digit - prints an integer
 * @args: arguments to format data type
 * Return: void
 */

void print_digit(va_list args)
{
	int digit = va_arg(args, int);
	putint(digit);
}
