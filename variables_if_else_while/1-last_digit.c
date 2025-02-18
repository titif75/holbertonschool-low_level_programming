#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry program

int main(void) -
{
	int  n;

    srand(time(0));
    n = rand() - RAND_MAX / 2 
    int dernier_chiffre = n % 10;

    printf("Last digit of %d is %d and ", n, dernier_chiffre);

    if (dernier_chiffre > 5)
    {
        printf("is greater than 5\n");
    }
    else if (dernier_chiffre == 0)
    {
        printf("is 0\n");
    }
    else
    {
        printf("is less than 6 and not 0\n");
    }
	
	return (0);
}
