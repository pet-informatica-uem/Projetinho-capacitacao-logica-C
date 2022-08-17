#include <stdio.h>
#include <stdlib.h>

int main() {

    //Convenções
    //Vetor de inteiros 
    //Deixarei o usuário escolher quantos ítens terá no vetor

    int QuantosValores = 0;
    printf("Quantos valores deseja informar? : ");
    scanf("%d", &QuantosValores);

    int Vetor[QuantosValores];

    for (int i = 0; i < QuantosValores; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &Vetor[i]);
    }

    int maior = Vetor[0];
    int posicao = 0;
    for (int i = 1; i < QuantosValores; i++) {
        if (Vetor[i] > maior) {
            maior = Vetor[i];
            posicao = i;
        }
    }

    printf("A posição do maior valor é %d", posicao);
}