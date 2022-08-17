#include <stdio.h>

typedef struct {
    char nome[20];
    int idade;
    float peso;
}Escola;

main(){

    Escola aluno[5]; 

    for(int i=0;i<5;i++){
        printf("\nInsira o nome do aluno %d: ", i+1);
        scanf("%s", aluno[i].nome);
        printf("Insira a idade do aluno %d: ", i+1);
        scanf("%d", &aluno[i].idade);
        printf("Insira o peso do aluno %d: ", i+1);
        scanf("%f", &aluno[i].peso);
    }
    for(int i=0;i<5;i++){
        printf("\n\nAluno: %s", aluno[i].nome);
        printf("\nIdade: %d", aluno[i].idade);
        printf("\nPeso: %f", aluno[i].peso);

    }
    printf("\n");
}