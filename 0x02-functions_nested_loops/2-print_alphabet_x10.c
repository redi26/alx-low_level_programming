#include "main.h"
/**
 * void print_alphabet_x10(void) -> prints the lowercase alphabets
 * Description: prints ten times the alphabet
 */
void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)

	{
		for (j = 'a'; j<= 'z'; j++)
		{
			_putchar(j);
		}
		putchar('\n');
	}
}

