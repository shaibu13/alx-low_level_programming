#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * main - print alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
