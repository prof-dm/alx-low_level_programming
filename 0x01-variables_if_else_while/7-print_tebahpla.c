#include <stdio.h>

/**
 * main - Prints alphabets in reverse
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}

	putchar(10);

	return (0);
}
