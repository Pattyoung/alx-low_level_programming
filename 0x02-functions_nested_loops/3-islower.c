#include "main.h"

/**
 * _islower - this mainfuc
 * @c: to be printed
 * Return: this returns 1 or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
