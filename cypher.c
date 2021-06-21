#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <locale.h>

void cypher(char *nome, int size){ // faz random do numero de posiçoes da string e converte para char novamente e dá output

    int min=65,max=122,i=0;
    int random[50]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    for(i=0;i<size-1;i++){
        random[i]=(rand() %(min-max-1))+min;
        nome[i]=(int)nome[i]+random[i];
    }
    printf("Nome em Cifra: ");
    for(i=0;i<size-1;i++){
        printf("%c",nome[i]);
    }
    printf("\nNome sem Cifra: ");
    for(i=0;i<size-1;i++){
        nome[i]=(int)nome[i]-random[i];
        printf("%c", nome[i]);
    }

}
int main(){

    char nome[50]={ };
    int tam;

    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");

    printf("insira o nome: ");
    fgets(nome,51,stdin);
    tam=strlen(nome);
    cypher(nome,tam);

return 0;
}
