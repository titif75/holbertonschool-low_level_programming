#include "main.h"
/**
* @brief Affiche un échiquier 8x8 dans la sortie standard.
*
* Cette fonction parcourt un tableau 2D de 8x8 caractères
* représentant un échiquier
* et affiche chaque case sur l'écran. Les caractères dans
* le tableau représentent des
* pièces d'échiquier (par exemple, 'R' pour une tour
* blanche, 'r' pour une tour noire).
*
* @param a Un tableau 2D de 8x8 caractères représentant l'échiquier.
*/
void print_chessboard(char (*a)[8]);
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
write(1, &a[i][j], 1);
}
write(1, "\n", 1);
}
}
