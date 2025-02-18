#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: This function generates a random number and prints its last digit with the appropriate message.
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n = 0; /* Initialisation de la variable n */
    int dernier_chiffre; /* Déclaration de la variable pour le dernier chiffre */

    srand(time(0)); /* Initialiser le générateur de nombres aléatoires */
    n = rand() - RAND_MAX / 2; /* Générer un nombre aléatoire */

    dernier_chiffre = n % 10; /* Extraire le dernier chiffre */

    /* Affichage du dernier chiffre et du message approprié */
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
