#include <stdio.h> //Biblioteca para função printf
#include <stdlib.h>
#include <string.h>// Biblioteca para função de string

//criando vetor

#define TAM_MAX 10


//Criando structs

typedef struct {
   
    char nome[30];
    char tipo[20];
    int quantidade;
}Item;

//Vetor para armazenar dados
Item listaDeItens[TAM_MAX];
int contadorItens = 0;
// Função para exibir o menu
int exibirMenu(){
    int opcao;   
       printf("===============================================\n");
       printf("  MOCHILA DE SOBREVIVENCIA - CODIGO DA IILHA\n");
       printf("===============================================\n");
       printf("Itens na mochila:(%d/10)\n", contadorItens);
       printf("\n");
       printf("1. Adicionar Item:\n");
       printf("2. Remover Item:\n");
       printf("3. Listar Item:\n");
       printf("0. Sair do programa\n");
       printf("----------------------------------------\n");
       printf("Escolha uma opção:");
       scanf("%d", &opcao); 
       printf("\n");      
       return opcao;
       
    }
    
    

    //Função para inserir item
    void inserirItem() {
          
       if(contadorItens < TAM_MAX){
          printf("---Adicionar Novo Item---\n");
          printf("Nome do item:");
          scanf("%s", listaDeItens[contadorItens].nome);
          printf("Tipo do item (arma, munição, cura, etc...):");
          scanf("%s", listaDeItens[contadorItens].tipo);
          printf("Quantidade:");
          scanf("%d", &listaDeItens[contadorItens].quantidade);
          printf("Item \"%s\" inserido com sucesso!\n",listaDeItens[contadorItens].nome);
          printf("\n");
          
          contadorItens++;
          
          printf("\n");
          

          //listar os itens na inserção de itens pelo usuario
          printf("====ITENS NA MOCHILA=====(%d/10)\n",contadorItens);
          printf("-----------------------------------------------\n");
          printf("Nome          |  Tipo       |     Quantidade\n");
          printf("----------------------------------------------\n");
           for(int i = 0; i < contadorItens; i++){
          printf("%s            |     %s      |         %d\n",
        listaDeItens[i].nome, listaDeItens[i].tipo, listaDeItens[i].quantidade);
          }
          
          
       }else {
        printf("Lista cheia! Não é possivel inserir.\n");
       }
       
          
}       
//Função para remover itens nao estou conseguindo. Ele exclui como pilha. Nao consigo resolver.

void removerItem() {
     if(contadorItens <= TAM_MAX){
          printf("---Remover Item---\n");
          printf("Qual item deseja remover?");
          scanf("%s",listaDeItens[contadorItens].nome); 
          printf("Item \"%s\" removido com sucesso!\n",listaDeItens[contadorItens].nome);
          printf("\n");
          
          contadorItens--;
          
          printf("\n");
           }else {
        printf("Lista já esta vazia.\n");
       }
        //listar os itens na inserção de itens pelo usuario
          
          printf("====ITENS NA MOCHILA=====(%d/10)\n",contadorItens);
          printf("-----------------------------------------------\n");
          printf("Nome          | Tipo       | Quantidade\n");
          printf("----------------------------------------------\n");
          for(int i = 0; i < contadorItens; i++){
           printf("%s            | %s         | %d\n",
        listaDeItens[i].nome, listaDeItens[i].tipo, listaDeItens[i].quantidade);
        
    }
}
 

    //Função para listar itens

void listarItens() {
    printf("====ITENS NA MOCHILA=====(%d/10)\n",contadorItens);
    if (contadorItens == 0){
        printf("Nenhum Item cadastrado.\n");

    }else {
            printf("-----------------------------------------------\n");
            printf("Nome          | Tipo       | Quantidade\n");
            printf("----------------------------------------------\n");
    
            for(int i = 0; i < contadorItens; i++){
            printf("%s            | %s         | %d\n",
        listaDeItens[i].nome, listaDeItens[i].tipo, listaDeItens[i].quantidade);
        }
    }
}
 int main(){
   
    
     int opcao;
    do{
      
       opcao = exibirMenu();

       switch (opcao){      
     
          case 1:
              inserirItem();
              
              break;
         case 2:
              removerItem();
              break;
          case 3:
              listarItens();
              break;
         
          case 0:
              printf("Saindo do programa...\n");
              break;
      
          default:
              printf("Opção invalida!\n");
            
      }
        
    }while (opcao != 0);

    
    
return 0;
};



     
