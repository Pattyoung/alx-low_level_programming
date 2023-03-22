#include <stdio.h>

/**
 * main - main func
 * Return: always0
 */

int main(void)
{
	int i, n = 50, t1 = 1, t2 = 2, nextTerm;

	printf("%d, %d, ", t1, t2);

	for (i = 3; i <= n; i++)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		printf("%d, ", nextTerm);
	}
	printf("\n");
	return (0);
}
