#include <stdio.h>

struct {
    char *nome;
    float preco;
    int quantidade;
} produto[5];

int menu(char *usuario, char *operacao) {
    int op = 0;

    printf("\n\n\n ============= \n");
	    printf(" %s \n", usuario);
	    printf(" ============= \n");

    for (int i = 0; i < 5; i++) {
        printf("\n%d. %s", i + 1, produto[i].nome);
    }

    printf("\n6. Finalizar %s", operacao);

    printf("\n\nOpção: ");
    scanf("%d", &op);

    return op - 1 ;
}

void cliente(){
    int op;
    float total = 0;

    do {
        
        op = menu("CLIENTE", "compra");

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
                total += produto[i].preco * produto[i].quantidade;
           }
            printf("\n\nTOTAL                      %.2f", total);        
        } 
        else
            printf("Opcao nao encontrada");     

    } while(op != 5);
}

void gerente(){
    int op;
    
    do {

        op = menu("GERENTE", "atualizacao");

        if (op >= 0 && op <= 4) {
            printf("\n ======================= \n");
            printf(" %s", produto[op].nome);
            printf("\n PRECO: %.2f", produto[op].preco);
            printf("\n ======================= \n");
            printf("Novo preco ");
            scanf("%f", &produto[op].preco);
        }
        else if (op != 5){
            printf("Opcao nao encontrada");
        } 

    } while(op != 5);
}

void cadastro() {

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

}

int main(){
    int op;
    
    cadastro();
    
    do {
        printf("\n\n\n ============= \n");
	    printf(" SUPERMERCADO \n");
	    printf(" ============= \n");

        printf("1. Cliente");
        printf("\n2. Gerente");
        printf("\n3. Sair");

        printf("\n\nOpção: ");
        scanf("%d", &op);

        switch(op){
            case 1:
                cliente();
            break;

            case 2:
                gerente();
            break;
        }

    } while(op != 3);
}