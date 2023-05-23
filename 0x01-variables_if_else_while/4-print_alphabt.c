#include <stdio.h>
/**
 * main - prints alphabet without 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt == 'e' || alphabt == 'q')
		continue;

		putchar(alphabt);
	}

	putchar('\n');

	return (0);
}
