#include <stdio.h>

int main () {

    int vetor [6];

    for (int i = 0; i < 6; i++) {
        printf ("\nDigite os numeros: ");
        scanf ("%d", &vetor[i]);
    }
    for (int i = 5; i >= 0;  i--) {
        printf ("\n%d", vetor[i]);

    }

    return 0;
}