//4. Projete um programa que receba todos os valores de uma matriz 3x3 e que armazene e printe a transposta dessa matriz.

#include <stdio.h>

void main(){
   
    float A[3][3], B[3][3];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Digite o valor da posicao A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }  
    }
   
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            B[j][i] = A[i][j];
        }  
    }
   
    printf("\n");
    printf("A matriz transposta ficou assim: ");
    printf("\n");
   
    for(int i = 0; i<3; i++){
        printf("\n");
        for(int j = 0; j<3; j++){
            printf("  %f  ",B[i][j]);
        }  
    }
}
