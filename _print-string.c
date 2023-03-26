#include "main.h"

/**
 * _printstring - a function that prints a string
 * @s: the string to print
 * Returns: return void
 */

void _printstring(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}

