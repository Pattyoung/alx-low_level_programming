#include <stdio.h>

/**
   * main - this mainfuc
   * Return: this returns 0
    */

int main(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		putchar(p + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
