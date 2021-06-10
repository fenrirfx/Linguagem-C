# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

char * espacos( char * cartao, const char * aux )
{
    char * p = aux;
    int i = 0;

    while( *p )
    {
        if( !isspace(*p) )
            cartao[i++] = *p;
        p++;
    }
    return cartao;
}


int print(char *x, int size){

    for(int i=0;i<size;i++){
        if(i<size-4)
            printf("*");
        else
            printf("%c",x[i]);
    }
}
int main(){

    char cartao[50],aux[50];
    int tam,val;

    printf("insira um numero: ");
    fgets(aux,sizeof(aux),stdin);
    espacos(cartao,aux);
    tam = strlen(cartao);

    for(int i=0;i<tam;i++)
        printf("%c",cartao[i]);
    print(cartao,tam);
return 0;
