#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_digit - prints an integer
 * @args: arguments to format data type
 * Return: Number of characters printed
 */

int print_digit(va_list args)
{
	int count = 0;
	int abs_calc, abs_hold, track_dig;
	int value = va_arg(args, int);

	if (value < 0)
	{
		putchar('-');
		count++;
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
		count++;
		putchar(((abs_calc / track_dig) % 10) + '0');
		track_dig = track_dig / 10;
	}
	return (count);
}
