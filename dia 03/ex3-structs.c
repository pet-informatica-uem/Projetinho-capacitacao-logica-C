#include <stdio.h>

struct Registro{
    char data[10];
    int ra;
    int ano;
}

main(){

    int n;

    printf("\nDigite a quantidade de alunos que serao registrados: ");
    scanf("%d", &n);

    struct Registro aluno[n];

    for(int i=0;i<n;i++){
        printf("\nInsira a data de nascimento do aluno %d: ", i+1);
        scanf("%s", aluno[i].data);
        printf("Insira o RA do aluno %d: ", i+1);
        scanf("%d", &aluno[i].ra);
        printf("Insira o ano de ingresso na universidade do aluno %d: ", i+1);
        scanf("%d", &aluno[i].ano);
    }
    for(int i=0;i<n;i++){
        printf("\n\nAluno: %d", i+1);
        printf("\nData de nascimento: %s", aluno[i].data);
        printf("\nRA: %d", aluno[i].ra);
        printf("\nAno de Ingresso: %d", aluno[i].ano);
    }

    printf("\n");
}