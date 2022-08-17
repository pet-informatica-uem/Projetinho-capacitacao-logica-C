#include <stdio.h>
#include <stdlib.h>

int main() {

    int QuantiaNotas = 0;
    printf("Quantas notas deseja informar? : ");
    scanf("%d", &QuantiaNotas);

    float NotasFinais[QuantiaNotas];

    for (int i = 0; i < QuantiaNotas; i++) {
        printf("Digite a nota:");
        scanf("%f", &NotasFinais[i]);
    }

    int NotasAltas = 0;
    for (int i = 0; i < QuantiaNotas; i++) {
        if (NotasFinais[i] >= 9){
            NotasAltas ++;
        }
    }

    int QuantiaLaurea = (QuantiaNotas / 3) * 2;

    if (NotasAltas >= QuantiaLaurea) {
        printf("atingiu a laurea acadêmica");
    } else if (NotasAltas < QuantiaLaurea) {
        printf("Não atingiu a laurea acadêmica");
    }

    
}