#include "main.h"
/**
* initialisation des variables pour les sommes des deux diagonales
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
