#include <stdio.h>
/**
 * main - print all single numbers of base 10
 * Return: 0
 *
 */
int main(void)
{
	int base_ten;

	for (base_ten = 0; base_ten <= 9; base_ten++)
	{
		putchar('0' + base_ten);
	}

	putchar('\n');

	return (0);
}

