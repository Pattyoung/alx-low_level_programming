#include "main.h"

/**
 * print_last_digit - this mainfuc
 * @p: print para
 * Return: this returns 0
 */

int print_last_digit(int p)
{
	int o;

	o = p % 10;
	if (p < 0)
		o = -o;
	_putchar(o + '0');
	return (o);
}
