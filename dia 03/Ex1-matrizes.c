// 1. Projete um programa que receba todos os valores reais de uma matriz 2x2 e que printa a soma de todos esses valores.

#include <stdio.h>

void main(){
    float A[2][2], soma;
   

    printf ("Digite o valor da posicao (1)(1): ");
    scanf ("%f", &A[0][0]);
    printf ("Digite o valor da posicao (1)(2): ");
    scanf ("%f", &A[0][1]);
    printf ("Digite o valor da posicao (2)(1): ");
    scanf ("%f", &A[1][0]);
    printf ("Digite o valor da posicao (2)(2): ");
    scanf("%f", &A[1][1]);  
   
    soma = A[0][0] + A[0][1] + A[1][0] + A[1][1];
   
    printf ("\n");
    printf ("O valor da soma é: %f", soma);  
    printf ("\n");
   
}