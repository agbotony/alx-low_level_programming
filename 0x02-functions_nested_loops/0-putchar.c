#include "holberton.h"
/**
 * main - Entry
 *
 * Return: Always 0
*/
int main (void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
