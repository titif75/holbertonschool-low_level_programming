#include <stdio.h>
#include <stdlib.h>  // Pour srand() et rand()
#include <time.h>    // Pour time()

int main(void)  // La fonction main doit être déclarée avec void si elle ne prend pas d'arguments
{
    /* Initialisation de la graine aléatoire */
    srand(time(0));  // Initialiser la graine avec l'heure actuelle

    int n;  // Déclare la variable n au début de la fonction (conformément à C90)
    n = rand() % 200 - 100;  // Génère des nombres entre -100 et 99

    if (n > 0)
    {
        printf("Positive\n");
    }
    else if (n < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
    return (0);  // Retourne 0 pour indiquer une exécution réussie
}
