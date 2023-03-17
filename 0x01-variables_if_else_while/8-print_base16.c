#include <stdio.h>

/**
   * main - this mainfuc
   * Return: this returns 0
    */

int main(void)
{
	int p;
	char q;

	for (p = 0; p < 10; p++)
		putchar(p + '0');
	for (q = 'a'; q < 'g'; q++)
		putchar(q);
	putchar('\n');
	return (0);
}
