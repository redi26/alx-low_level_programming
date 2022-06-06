#include <stdio.h>
/**
 * main - use only putchar function
 * Description: program that prints all single digit numbers
 * Return: always 0
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
