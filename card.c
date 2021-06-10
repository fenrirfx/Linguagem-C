# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int print(char *x, int size){

    for(int i=0;i<size;i++){
        if(i<size-4)
            printf("*");
        else
            printf("%c",x[i]);
    }

}

int main(){

    char cartao[20];
    int tam;


    printf("insira um numero: ");
    scanf("%s",cartao);
    tam=strlen(cartao);

    print(cartao,tam);




return 0;
}

