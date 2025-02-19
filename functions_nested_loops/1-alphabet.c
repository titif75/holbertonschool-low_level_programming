/* main.c */
#include <unistd.h>
void _putchar(char c) { write(1, &c, 1); }
void print_alphabet(void);  // Ajout du prototype de la fonction
int main(void) { 
print_alphabet(); 
return 0; 
}
void print_alphabet(void) { 
char letter = 'a'; 
while (letter <= 'z') { 
_putchar(letter); 
letter++; 
} 
_putchar('\n'); 
}
