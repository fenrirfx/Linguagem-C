#include "MyFunctions.h"
#include <stdio.h>
#include <locale.h>
#define DIM 5

typedef struct
{
    char nome[51];
    int idade;
}   formando;

int cont = 0;
formando formandos[DIM];

void inserir(){
    int n=0;
    printf("Quantos registos pretende inserir?:");
    scanf("%d",&n);
    getchar();
    if (cont<DIM-1){
        if (n<=(DIM-cont)){
            for(int i=0;i<n;i++){
                printf("%dº registo\n",cont+1);

                printf("Nome: ");
                getstr(formandos[cont].nome,51);
            do
                printf("Idade: ");
            while(!getint(&formandos[cont].idade));
            fflush(stdin);
            cont++;
            }
        }
        else{
            puts("Não existe espaço para os registos pretendidos!");
            getchar();
        }
    }
    else{
        printf("Lista cheia!");
        getchar();
        }
}
void listar(){

    printf("\nListagem de Formandos\n");

    for(int i=0;i<DIM;i++){
        if (formandos[i].nome!=NULL && formandos[i].idade > 0){
            printf("Nome: %s\n",formandos[i].nome);
            printf("Idade: %i\n",formandos[i].idade);
        }
        else
            break;
    }

    puts("Prima qualquer tecla para sair!");
    getchar();
}
void procurar(){
    char* nome;
    int comp;
    getchar();
    puts("insira o nome para pesquisa:");
    getstr(nome,50);
    for(int i=0;i<DIM;i++){
        comp=strcmp(nome,formandos[i].nome);
        if (comp==0){
            puts("Encontrado o registo!");
            printf("Nome: %s\n",formandos[i].nome);
            printf("Idade: %i\n",formandos[i].idade);
            return;
        }
        else if (i==DIM-1)
            puts("Não foi encontrado qualquer registo com esse nome!");
    }


}

int main(){

    int resposta;
    do{
    puts("(1)inserir");
    puts("(2)Listar");
    puts("(3)Procurar");
    puts("(9)Sair");
    scanf("%d",&resposta);
    switch(resposta){
        case 1:
            inserir();

            break;
        case 2:
            listar();

            break;
        case 3:
            procurar();

            break;
        case 9:
            return 0;
            break;
        default:
            printf("Opção inválida!!\n");

            break;
        }
    }while(resposta !=9);

return 0;
}
