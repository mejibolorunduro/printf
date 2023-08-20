#include "main.h"

/**
 * our_putchar - prints a character
 * @c: character input 1
 * Return: 1(Success)
 */

int our_putchar(char c)
{
	return (write(1, &c, 1));
}
