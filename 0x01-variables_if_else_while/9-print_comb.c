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
		if (p == 9)
			putchar(p + '0''\n');
		else
		{
			putchar(p + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
