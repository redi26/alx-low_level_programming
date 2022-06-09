#include "main.h"
/**
 *
 * int print_sign(int n) - prints the sign of a number
 * @n: prints +, 0 and - depending on number
 * Return: returns 1, 0 and -1 depending on result
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
			return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
