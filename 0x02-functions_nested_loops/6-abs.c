#include "main.h"

/**
 * _abs - main func
 * @i: int value
 * Return: this returns i
 */

int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
