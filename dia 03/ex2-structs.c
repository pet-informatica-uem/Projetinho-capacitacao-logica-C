#include <stdio.h>

typedef struct {
    char nome[20];
    int idade;
    float peso;
}Escola;

main(){

    float mediai=0, mediap=0;

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
        printf("\nPeso: %.2f", aluno[i].peso);

        mediai = mediai + aluno[i].idade;
        mediap = mediap + aluno[i].peso;

    }

    mediai = mediai/5;
    mediap = mediap/5;

    printf("\n\nA media de Idades eh: %.2f", mediai);
    printf("\nA media de Peso eh: %.2f", mediap);


    printf("\n\n");

}

