#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct type - connect conversion specifiers with the correct print function
 * @print: a function pointer for the print functions
 * @identifier: the conversion specifier
 */
typedef struct type
{
	char *identifier;
	int (*print)(va_list);
} type_t;

int _putchar(char);
int _printf(const char *, ...);
void _printstring(char *s);

#endif
