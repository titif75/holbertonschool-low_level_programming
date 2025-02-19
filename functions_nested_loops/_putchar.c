#include <unistd.h>
/**
* _putchar - affiche un caractère
*@c: le caractère à afficher
*/
void _putchar(char c)
{
write(1, &c, 1);
}
