#include<stdio.h>

int main(){
    float PrecoPacoteDeArroz = 12.5;
    float PrecoPacoteDeFeijao = 8;
    float PrecoCaixaDeOvos = 6.5;
    float PrecoRefrigerante = 5.5;
    float PrecoSalgadinho = 3.5;
    float valorCompra, troco, valorRecebido;

    int QntPacoteDeArroz, QntPacoteDeFeijao, QntCaixaDeOvos, QntRefrigerante, QntSalgadinho;

    printf("\n\n\n ============= \n");
    printf(" SUPERMERCADO \n");
    printf(" ============= \n");

    printf("\n ======================= \n");
    printf(" Pacote de Arroz");
    printf("\n PRECO: %.2f", PrecoPacoteDeArroz);
    printf("\n ======================= \n");
    printf("QUANTIDADE ");
    scanf("%d", &QntPacoteDeArroz);

    printf("\n ======================= \n");
    printf(" Pacote de Feijao");
    printf("\n PRECO: %.2f", PrecoPacoteDeFeijao);
    printf("\n ======================= \n");
    printf("QUANTIDADE ");
    scanf("%d", &QntPacoteDeFeijao);

    printf("\n ======================= \n");
    printf(" Caixa De Ovos");
    printf("\n PRECO: %.2f", PrecoCaixaDeOvos);
    printf("\n ======================= \n");
    printf("QUANTIDADE ");
    scanf("%d", &QntCaixaDeOvos);

    printf("\n ======================= \n");
    printf(" Refrigerante");
    printf("\n PRECO: %.2f", PrecoRefrigerante);
    printf("\n ======================= \n");
    printf("QUANTIDADE ");
    scanf("%d", &QntRefrigerante);

    printf("\n ======================= \n");
    printf(" Salgadinho");
    printf("\n PRECO: %.2f", PrecoSalgadinho);
    printf("\n ======================= \n");
    printf("QUANTIDADE ");
    scanf("%d", &QntSalgadinho);

    valorCompra = (QntCaixaDeOvos * PrecoCaixaDeOvos) + (QntPacoteDeArroz * PrecoPacoteDeArroz) + (QntPacoteDeFeijao * PrecoPacoteDeFeijao) + (QntRefrigerante * PrecoRefrigerante) + (QntSalgadinho * PrecoSalgadinho);

    printf("\n ======================= \n");
    printf("    VALOR DA COMPRA: %.2f \n", valorCompra);
    printf("\n    VALOR RECEBIDO ");
    scanf("%f", &valorRecebido);
    printf("\n ======================= \n");

    troco = valorRecebido - valorCompra;
    printf("TROCO: %.2f \n", troco);
}
