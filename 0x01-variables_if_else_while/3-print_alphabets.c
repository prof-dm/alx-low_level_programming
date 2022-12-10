#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the letters of the alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 65)
	{
		putchar(j);
		j++;
	}
	putchar(10);

	return (0);
}
