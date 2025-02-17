#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand(time(NULL));
    int n = rand() % 100; /* Générer un nombre aléatoire entre 0 et 99 */
    printf("The string Last digit of %d is, ", n);
    int last_digit; /* Variable pour stocker le dernier chiffre de n */
    last_digit = n % 10; /* Calculer la dernière chiffre */
    if (last_digit > 5) {
        printf("and is greater than 5\n");
    } else if (last_digit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    }
    return 0;
}
