#include <stdio.h>

/**
 * main - this mainfuc
 * Return: this returns 0
 */

int main(void)
{
	int i, j
		;
	for (i = 0; i <= 8; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
		putchar('0' + i / 9 * j);
		putchar('0' + (i % 9 + j) / 10);
		putchar('0' + (i % 9 + j) % 10);
		if (i != 8 || j != 9)
			{
			putchar(',');
			putchar(' ');
			}
	}
	}
return (0);
}
