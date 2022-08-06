#include <stdio.h>


float PrecoPacoteDeArroz = 12.5;    
float PrecoPacoteDeFeijao = 8;
float PrecoCaixaDeOvos = 6.5;
float PrecoRefrigerante = 5.5; 
float PrecoSalgadinho = 3.5;

float valorCompra, valorRecebido, troco;

int QntPacoteDeArroz, QntPacoteDeFeijao, QntCaixaDeOvos;
int QntRefrigerante, QntSalgadinho;
int op;

int main(){

    do {
        printf("\n\n\n ============= \n");
	    printf(" SUPERMERCADO \n");
	    printf(" ============= \n");

        printf("1. Pacote de arroz");
        printf("\n2. Pacote de feijão");
        printf("\n3. Caixa de ovos");
        printf("\n4. Refrigerante");
        printf("\n5. Salgadinho");
        printf("\n6. Finalizar compra");

        printf("\n\nOpção: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("\n ======================= \n");
                printf(" Pacote de Arroz");
                printf("\n PRECO: %.2f", PrecoPacoteDeArroz);
                printf("\n ======================= \n");
                printf("QUANTIDADE ");
                scanf("%d", &QntPacoteDeArroz);
            break;

            case 2:
                printf("\n ======================= \n");
                printf(" Pacote de Feijao");
                printf("\n PRECO: %.2f", PrecoPacoteDeFeijao);
                printf("\n ======================= \n");
                printf("QUANTIDADE ");
                scanf("%d", &QntPacoteDeFeijao);
            break;

            case 3:
                printf("\n ======================= \n");
                printf(" Caixa De Ovos");
                printf("\n PRECO: %.2f", PrecoCaixaDeOvos);
                printf("\n ======================= \n");
                printf("QUANTIDADE ");
                scanf("%d", &QntCaixaDeOvos);
            break;

            case 4:
                printf("\n ======================= \n");
                printf(" Refrigerante");
                printf("\n PRECO: %.2f", PrecoRefrigerante);
                printf("\n ======================= \n");
                printf("QUANTIDADE ");
                scanf("%d", &QntRefrigerante);
            break;

            case 5:
                printf("\n ======================= \n");
                printf(" Salgadinho");
                printf("\n PRECO: %.2f \n", PrecoSalgadinho);
                printf("\n ======================= \n");
                printf("QUANTIDADE ");
                scanf("%d", &QntSalgadinho);
            break;

            case 6:
                printf("\n ======================= \n");
                printf(" Extrato");
                printf("\n Pacote de arroz      %.2f      quantidade  %d     valor    %.2f", PrecoPacoteDeArroz, QntPacoteDeArroz, PrecoPacoteDeArroz * QntPacoteDeArroz);
                printf("\n Pacote de feijão     %.2f       quantidade  %d     valor    %.2f", PrecoPacoteDeFeijao, QntPacoteDeFeijao, PrecoPacoteDeFeijao * QntPacoteDeFeijao);
                printf("\n Caixa de ovos        %.2f       quantidade  %d     valor    %.2f", PrecoCaixaDeOvos, QntCaixaDeOvos, PrecoCaixaDeOvos * QntCaixaDeOvos);
                printf("\n Refrigerante         %.2f       quantidade  %d     valor    %.2f", PrecoRefrigerante, QntRefrigerante, PrecoRefrigerante * QntRefrigerante);
                printf("\n Salgadinho           %.2f       quantidade  %d     valor    %.2f", PrecoSalgadinho, QntSalgadinho, PrecoSalgadinho * QntSalgadinho);

                valorCompra = PrecoPacoteDeArroz * QntPacoteDeArroz + PrecoPacoteDeFeijao * QntPacoteDeFeijao + PrecoCaixaDeOvos * QntCaixaDeOvos + PrecoRefrigerante * QntRefrigerante + PrecoSalgadinho * QntSalgadinho;

                printf("\n\nTOTAL                                                     %.2f", valorCompra);

                do {
                    printf("\n\nVALOR DA COMPRA: %.2f \n", valorCompra);
                    printf("\nVALOR RECEBIDO ");
                    scanf("%f", &valorRecebido);

                    troco = valorRecebido - valorCompra;
                    printf("TROCO: %.2f \n", troco);
                    
                } while (troco < 0);
                
                printf("\n ======================= \n");
            break;

            default:
                printf("\n\nOpcao nao encontrada");
            break;
        }

    } while(op != 6);
}