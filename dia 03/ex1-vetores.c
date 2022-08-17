#include <stdio.h>
#include <stdlib.h>

int main() {

    //EXERCÍCIO 01:

    int Vetor[9] = {0, 1, 1, 1, 1, 1, 1, 1, 1};
    int i = 0;
    int soma = 0;
    while (i < 10) {
        soma = soma + Vetor[i];
        i++;
    }

    //testando se funciona:
    printf("a soma dos nove valores armazenados no vetor é: %d\n", soma);

    //podemos pedir as entradas do usuário:

    int VetorInteiros[9];
    for (int i = 1; i <= 9; i++) {

        printf("Digite o %d valor:", i);
        scanf("%d", &VetorInteiros[i-1]);
    }

    int soma2 = 0;
    int var = 0;

    do {
        soma2 = soma2 + VetorInteiros[var];
        var ++;
    } while (var != 9);

    printf("a soma é: %d", soma2);


}