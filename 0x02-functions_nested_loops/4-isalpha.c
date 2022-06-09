#include "main.h"
/**
 * _isalpha - function that checks for lowercase
 * @c: returns 1 if c is lowercase
 * Return: returns 0 or 1 depending on condition
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
