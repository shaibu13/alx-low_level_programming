#include <stdio.h>
#include "main.h"
/**
 * main - printing alphabet 10 times
 *
 *
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar('A' + j);
		}

	}
	_putchar('\n');
}
