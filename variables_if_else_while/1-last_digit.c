#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int n; 

    printf("Last digit of %d is ", n);

    int last_digit; /* Variable pour stocker le dernier chiffre de n */
    last_digit = n % 10;

    printf("%d ", last_digit);

    if (last_digit > 5) {
        printf("and is greater than 5\n");
    } else if (last_digit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
