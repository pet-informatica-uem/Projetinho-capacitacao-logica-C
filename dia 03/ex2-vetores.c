#include <stdio.h>
#include <stdlib.h>

int main() {

    int Vetor[6];

    for (int i = 1; i <= 6; i++) {

        printf("Digite o %d valor:", i);
        scanf("%d", &Vetor[i-1]);
    }

    int max = Vetor[0];
    for (int i=1; i < 6; i++) {
        if (Vetor[i] > max) {
            max = Vetor[i];
        }
    }

    printf("eis aqui o maior valor do vetor: %d", max);
}