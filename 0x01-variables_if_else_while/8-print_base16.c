#include <stdio.h>
/**
 * main - print all numbers of base 16
 * Return: 0
 *
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}

	}

	putchar('\n');

	return (0);
}
