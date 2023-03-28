#include "main.h"

/**
 * _printf - print output to stdou according to a format string
 * @format: the format of the string to print
 * Return: number of chsracters printed ec=xcluding the null byte
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	int (*function)(va_list) = NULL;

	va_start(args, format);

	while (*format)
	{
		if (*fomart == '%' && (format + 1) != '%')
		{
			format++
			function = get_function(format);
			if (*(format) == '\0')
				return (-1);
			else if (function == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				count += 2;
			}
			else
				count += function(args);
		}
		else if
			(*format == '%' && (*format + 1) == "%")
			{
				format++;
				_putchar('%');
				count++;
			}
		else
		{
			_putchar(*format);
			count++
		}
		format++;
	}
	va_end(args);
	return (count);
}
