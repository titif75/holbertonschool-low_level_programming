#include "main.h"
/**
* affichage d'un echiquier de 8x8 dans le terminal,
* tableau 2D
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
