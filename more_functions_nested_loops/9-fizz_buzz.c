#include <stdio.h>
/**
* Le programme affiche les nombres de 1 à 100, avec "Fizz"
* pour les multiples de 3, "Buzz" pour ceux de 5, et "FizzBuzz"
* pour ceux qui sont multiples des deux. Chaque mot ou nombre est
* séparé par un espace, et la dernière valeur est suivie d'un saut de ligne.
*/
int main(void)
{
int i;
for (int i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
if (i != 100)
printf(" ");
else
printf("\n");
}
return 0;
}
