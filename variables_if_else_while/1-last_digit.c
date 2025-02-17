#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
int n; /* Déclaration de n */
int last_digit; /* Déclaration de last_digit */
srand(time(NULL));
n = rand() % 100; /* Initialisation de n */
printf("Last digit of %d is ", n);
last_digit = n % 10; /* Calcul de la dernière chiffre */
printf("%d ", last_digit); /* Afficher la dernière chiffre avec un espace */
if (last_digit > 5) {
printf("and is greater than 5\n");
} else if (last_digit == 0) {
printf("and is 0\n");
} else
{
printf("and is less than 6 and not 0\n");
}
return 0;
}
