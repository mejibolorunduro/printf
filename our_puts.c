#include "main.h"

/**
 * our_puts - prints string
 * @c: string
 * Return: number of bytes
 */

int our_puts(char *c)
{
	int tally = 0;

	if (c)
	{
		for (tally = 0; c[tally] != '\0'; tally++)
		{
			our_putchar(c[tally]);
		}
	}
	return (tally);
}
