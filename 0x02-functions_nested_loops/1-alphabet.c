#include "main.h"
/**
 * main - use _putchar
 * Description: write function that prints alphabet
 * Return: a-z
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');

}
