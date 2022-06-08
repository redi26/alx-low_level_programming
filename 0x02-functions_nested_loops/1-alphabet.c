#include "main.h"
/**
 * main - use function _putchar
 * Description: function that prints the alphabet
 * Return; a-z
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
