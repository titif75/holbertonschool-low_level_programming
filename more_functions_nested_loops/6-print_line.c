/* Déclaration de la fonction _putchar */
int _putchar(char c) {
return write(1, &c, 1);
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
print_line(5);  // Affiche "_____"
print_line(0);  // Affiche juste un saut de ligne
print_line(-3); // Affiche juste un saut de ligne
return 0;
}
