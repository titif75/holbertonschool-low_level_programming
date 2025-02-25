#include "main.h"
/* Déclaration de la fonction _putchar */
*
*/
}
void print_line(int n) {
if (n <= 0) {
_putchar('\n');
} else {
int i;
for (i = 0; i < n; i++) {
_putchar('_');
}
_putchar('\n');
}
}

int main() {
print_line(5);
print_line(0);
print_line(-3);
return 0;
}
