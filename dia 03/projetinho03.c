#include <stdio.h>


struct {
    char *nome;
    float preco;
    int quantidade;
} produto[5];

float valorCompra, valorRecebido, troco;
int op;

int main(){

    produto[0].nome = "Pacote de arroz";
    produto[0].preco = 12.5;

    produto[1].nome = "Pacote de feijão";
    produto[1].preco = 8;

    produto[2].nome = "Caixa de ovos";
    produto[2].preco = 6.5;

    produto[3].nome = "Refrigerante";
    produto[3].preco = 5;

    produto[4].nome = "Salgadinho";
    produto[4].preco = 3.5;
    

    do {
        printf("\n\n\n ============= \n");
	printf(" SUPERMERCADO \n");
	printf(" ============= \n");

        // printa menu com os produtos do mercado
        for (int i = 0; i < 5; i++) {
        	printf("\n%d. %s", i + 1, produto[i].nome);
        }   

        printf("\n6. Finalizar compra");

        printf("\n\nOpção: ");
        scanf("%d", &op);

        // o vetor de struct comeca na posicao 0
        op -= 1;

        // printa o nome do produto, o preço e salva a quantidade que o usuario escolheu
        if (op >= 0 && op <= 4) {
            printf("\n ======================= \n");
            printf(" %s", produto[op].nome);
            printf("\n PRECO: %.2f", produto[op].preco);
            printf("\n ======================= \n");
            printf("QUANTIDADE ");
            scanf("%d", &produto[op].quantidade);
        }
        else if (op == 5){

            printf("\n ======================= \n");
            printf(" Extrato");
            
            for (int i = 0; i < 5; i++){
                printf("\n %s      quantidade  %d     valor    %.2f", produto[i].nome, produto[i].quantidade, produto[i].preco);
                valorCompra += produto[i].preco * produto[i].quantidade;
            }
            printf("\n\nTOTAL                      %.2f", valorCompra);      

            do {
                printf("\n\nVALOR DA TOTAL: %.2f \n", valorCompra);
                printf("\nVALOR RECEBIDO ");
                scanf("%f", &valorRecebido);

                troco = valorRecebido - valorCompra;
                printf("TROCO: %.2f \n", troco);
                    
            } while (troco < 0);
                
                printf("\n ======================= \n");  
        } 
        else
            printf("Opcao nao encontrada");   

    } while(op != 5);
}
