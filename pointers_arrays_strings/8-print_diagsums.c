#include "main.h"
/**
* @brief Additionne deux entiers.
* Cette fonction prend deux entiers en paramètre et
* retourne leur somme.
* @param a Le premier entier.
* @param b Le deuxième entier.
* @return La somme de a et b.
*/
int add(int a, int b) {
return a + b;
}
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
/**
* @brief Fonction principale qui exécute le programme.
* Cette fonction initialise une matrice carrée,
* puis appelle la fonction `print_diagsums`
* pour afficher les sommes des deux diagonales de la matrice.
* @return Retourne 0 en cas de succès.
*/
int main(void)
{
int matrix[3][3] =
{
{1, 2, 3},
{4, 5, 6},
{7, 8, 9}
};
return (0);
}
