#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

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
		str = "(null)";
	}
	fputs(str, stdout);
	return (strlen(str));
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
	return (1);
}

/**
 * print_digit - prints an integer
 * @args: arguments to format data type
 * Return: Number of characters printed (should be 1)
 */

int print_digit(va_list args)
{
	int digit = va_arg(args, int);
	putint(digit);
	return (4);

}

/**
 * print_mod - prints a percent sign in the case of a double-%
 * @args: unused
 * 
 * Return: Number of characters printed (should be 1)
*/

int print_mod(__attribute__((unused)) va_list args)
{
	putchar('%');
	return (1);
}

/**
 * print_nothing - prints absolutely nothing, exists to catch edge cases
 * @args: unused
 * 
 * Return: 0
*/

int print_nothing(__attribute__((unused)) va_list args)
{
	return (0);
}

/**
 * catch_all - prints a percent sign and a character for edge cases
 * @c: the character to print
 * 
 * Return: 2 - the length of "%c"
*/
int catch_all(char c)
{
	putchar('%');
	putchar(c);
	return (2);
}