#include <stdio.h>
#include <main.h>
void _putchar(char c) {
putchar(c);  
}
void print_alphabet_x10(void) {
int i, j;
for (i = 0; i < 10; i++) {
for (j = 'a'; j <= 'z'; j++) { // Boucle pour imprimer l'alphabet de 'a' à 'z'
_putchar(j);  
}
_putchar('\n');  
}
}
int main() {
print_alphabet_x10();  
return 0;
}
