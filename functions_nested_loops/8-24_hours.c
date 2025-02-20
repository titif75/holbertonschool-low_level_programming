#include "main.h"  // Si vous avez un fichier d'en-tête
void jack_bauer(void)
{
int h, m;
for (h = 0; h < 24; h++)  // De 00 à 23
{
for (m = 0; m < 60; m++)  // De 00 à 59
{
_putchar((h / 10) + '0');  // Affiche les dizaines d'heures
_putchar((h % 10) + '0');  // Affiche les unités d'heures
_putchar(':');
_putchar((m / 10) + '0');  // Affiche les dizaines de minutes
_putchar((m % 10) + '0');  // Affiche les unités de minutes
_putchar('\n');
}
}
}
