#include "main.h"
/**
* Calcule la somme des éléments des deux diagonales
* d'une matrice carrée.
* @param a Pointeur vers la matrice carrée
* (tableau 1D représentant la matrice).
* @param size Taille de la matrice (nombre de lignes/colonnes).
* @param sums Tableau de taille 2 où seront stockées
*  les sommes des diagonales.
*/
void print_diagsums(int *a, int size){
int sum_diag1 = 0, sum_diag2 = 0;
for (int i = 0; i < size; i++)
{
sum_diag1 += *(a + i * size + i);
sum_diag2 += *(a + i * size + (size - 1 - i));
}
sums[0] = sum_diag1;
sums[1] = sum_diag2;
