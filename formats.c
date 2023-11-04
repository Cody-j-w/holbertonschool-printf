#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_digit - prints an integer
 * @args: arguments to format data type
 * Return: Number of characters printed (should be 1)
 */

int print_digit(va_list args)
{

	int count = 0;
	int abs_calc, abs_hold, track_dig;
	int value = va_arg(args, int);

	if (value < 0)
	{
		count += putchar('-');
		abs_calc = value * -1;

	}
	else
	{
		abs_calc = value;
	}

	abs_hold = abs_calc;
	track_dig = 1;

	while (abs_hold > 9)
	{
		abs_hold = abs_hold / 10;
		track_dig = track_dig * 10;
	}
	while (track_dig >= 1)
	{
		count = count + putchar(((abs_calc / track_dig) % 10) + '0');
		track_dig = track_dig / 10;
	}
	return (count);
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
	return (-1);
}

/**
 * catch_all - prints a percent sign and a character for edge cases
 * @args: the va_list that printf has accepted. Does nothing here
 *
 * Return: 2 - the length of "%c"
*/
int catch_all(__attribute__((unused)) va_list args)
{
	return (2);
}
