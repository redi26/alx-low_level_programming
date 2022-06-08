#include "main.h"

/**
 * main - use function _putchar
 * Discription: a function that prints 10 times the alphabet
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int n, co;
	co = 0;
	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
