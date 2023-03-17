#include <stdio.h>

/**
 * main - this is a demo code
 * Return: this returns to 0
 */

int main(void)
{
	int age;

	printf("Please Enter Your Age\n");
	scanf("%d", &age);
	if (age < 100)
	{
		printf("You are pretty young\n");
	}
	else if (age == 100)
	{
		printf("You are old\n");
	}
	else
	{
		printf("You are very old\n");
	}
	return (0);
}

