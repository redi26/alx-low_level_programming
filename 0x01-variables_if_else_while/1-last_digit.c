#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  assign a random number to the variable n
 * Description: the output of the program should be the string
 * Return: always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 5)
{
	printf("greater than 5");
}
if (n == 0)
{
	printf("0")
}
if (n < 6 && n != 0)
{
	printf("less than 6 not 0");
}

printf("\n");

return (0);
}
