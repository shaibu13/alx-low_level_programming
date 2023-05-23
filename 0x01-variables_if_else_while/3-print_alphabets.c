#include <stdio.h>
/**
 * main - print upper and lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i = sizeof(alpha) - 1; i++)
	{
		putchar(alpha[i]);
	}

	putchar('\n');

	return (0);
}
