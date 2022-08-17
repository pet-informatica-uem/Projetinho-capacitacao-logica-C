#include <stdio.h>
#include <stdlib.h>

int main (){

    int Vetor[12];


    for (int i = 0; i < 12; i++) {
        printf("Digite um valor : ");
        scanf("%d", &Vetor[i]);
    }

    int par = 0;
    int impar = 0;
    for (int valor = 0; valor < 12; valor++) {
        if ((Vetor[valor] % 2) == 0) {
            par = par + 1;
        } else {
            impar = impar + 1;
        }
    }

    if (par > impar) {
        printf("há mais números pares");
    } else if (par < impar) {
        printf("há mais números impares");
    } else {
        printf("há o mesmo número de pares e impares");
    }
}
