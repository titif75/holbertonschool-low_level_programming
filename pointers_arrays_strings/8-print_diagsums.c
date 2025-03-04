#include "main.h"
/**
* Affiche la somme des deux diagonales d'une matrice carrée.
*
* Cette fonction calcule la somme des deux diagonales
* (principale et secondaire)
* d'une matrice carrée représentée sous forme de
* tableau 1D.
* @param a Le tableau 1D représentant la matrice carrée.
* @param size La taille de la matrice carrée
* (nombre de lignes et de colonnes).
*/
void print_diagsums(int *a, int size);
{
int i;
int sum1 = 0;
int sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += *(a + (i * size) + i);
sum2 += *(a + (i * size) + (size - i - 1));
}
write(1, "Primary diagonal sum: ", 22);
write(1, &sum1, sizeof(sum1));
write(1, "Secondary diagonal sum: ", 24);
write(1, &sum2, sizeof(sum2));
}
int main(void) {
int matrix[3][3] = {
{1, 2, 3},
{4, 5, 6},
{7, 8, 9}
};
return (0);
}
