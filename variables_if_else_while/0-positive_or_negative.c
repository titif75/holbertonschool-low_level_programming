#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialisation de la graine aléatoire
    srand(time(NULL));

    // Génération d'un nombre aléatoire
    int n = rand() % 200 - 100; // Génère des nombres entre -100 et 99

    // Afficher si le nombre est positif, négatif ou zéro
    printf("%d", n);
    
    if (n > 0) {
        printf(" est positif\n");
    } else if (n < 0) {
        printf(" est négatif\n");
    } else {
        printf(" est zéro\n");
    }

    return 0;
}
