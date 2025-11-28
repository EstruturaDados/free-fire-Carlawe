#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Criação da estrutura.
typedef struct{
     char nome[30];
     char tipo[20];
     int quantidade;
} Item;

//Criando vetor para 10 itens.
#define TAM_MAX 10




//Funções...
void inicializarItem(Item *lista);

void inserirItem(Item *lista, char* texto);
void removerItem(Item *lista, char* texto);
void listarItem(Item *lista);


void menuinserirItem();
void menuremoverItem();
void menulistarItem();


int main() {
    int opcao;
    do{
        printf("Escolha uma opção\n");
        printf("1.Inserir Item\n");
        printf("2.Remover Item\n");
        printf("3.Listar Item\n");
        printf("0.Sair");
        scanf("%d", &opcao);
 

        switch (opcao) {
            case 1:
                menuinserirItem();
        break;
            case 2:
                menuremoverItem();
        break;
            case 3:
                menulistarItem();
        break;
            case 0:
                printf("saindo...");
    
    default:
          printf("Opção inválida");
        break;
    }
} while(opcao != 0);

return 0;
};