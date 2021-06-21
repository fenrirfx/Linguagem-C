#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <locale.h>

void cypher(char *nome, int size){ // faz random do numero de posiçoes da string e converte para char novamente e dá output

    int random,min=65,max=122;
    int aux[50]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},i=0;

    for(i=0;i<size-1;i++){
        random=(rand() %(min-max-1))+min;
        aux[i]=random;
    }
    printf("Nome em Cifra: ");
    for(i=0;i<size-1;i++){
        aux[i]=(char)aux[i];
        printf("%c",aux[i]);
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
