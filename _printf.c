#include "main.h"
#include <stdio.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: format specifier
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, str_tally, tally = 0;

	va_list our_args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(our_args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			our_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			our_putchar(va_arg(our_args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str_tally = our_puts(va_arg(our_args, char *));
			i++;
			tally += (str_tally - 1);
		}
		else if (format[i + 1] == '%')
		{
			our_putchar('%');
		}
		tally += 1;
	}
	va_end(our_args);
	return (tally);
}
