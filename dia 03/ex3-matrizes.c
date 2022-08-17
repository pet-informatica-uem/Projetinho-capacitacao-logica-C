// 2. Projete um programa que calcula a soma da diagonal principal de uma matriz quadrada qualquer (o programa deve perguntar a dimensão e os valores da matriz).

#include <stdio.h>

void main(){
   
    int dimensao;
   
    printf("Digite a dimensao da matriz quadrada: ");
    scanf("%d", &dimensao);
   
    float A[dimensao][dimensao];
   
    for(int i = 0; i<dimensao; i++){
        for(int j = 0; j<dimensao; j++){
            printf("Digite o valor da posicao A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }  
    }
   
    float soma = 0;
   
    for(int i = 0; i<dimensao; i++){
        soma = soma + A[i][i];
    }
   
    printf("A soma da diagonal principal eh: %f", soma);
   
}
