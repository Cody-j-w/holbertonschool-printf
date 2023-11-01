#include "main.h"
#include <stdio.h>
#include <stdarg.h>

void print_string(va_list args)
{
	char *str = va_arg(args, char*);
	puts(str);
}
void print_char(va_list args)
{
	char ch = va_arg(args, char);
	putchar(ch);
}
void print_digit(va_list args)
{
	int digit = va_arg(args, int);
	putchar('0' + digit);
}
