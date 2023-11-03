#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * putint - writes the integer i to stdout
 * @i: the integer to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int putint(int i)
{
	return (write(1, &i, 4));
}

