#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - this mainfuc
 * @n: parametre
 * Return: this returns 0
 */

void print_to_98(int n)
{
	int i;

	printf("%d", n);
	if (n < 98)
	{
		for (i = n+1; i <= 98; i++)
		{
		printf(", %d", i);
		}
	}
	else if (n > 98)
	{
		for(i = n-1; i >= 98; i--)
		{
		printf(", %d", i);
		}
	}
	printf("\n");
}
