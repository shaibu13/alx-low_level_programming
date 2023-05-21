#include <unistd.h>
#include <string.h>
/**
 * main - printing to stdout without printf or puts
 * Return: 0
 */
int main(void)
{
	const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, message, strlen(message));
	return (1);
}
