#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Verifier si nombre positif ou negatif
*
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
printf("%d", n);
if (n > 0)
{
printf(" is positive\n");
}
else if (n < 0)
{
printf(" is negative\n");
}
else
{
printf(" is zero\n");
}
	return (0);
}
