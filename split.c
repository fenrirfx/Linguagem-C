# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>


void dividir(char *frase, int pos){

    char *palavra;
    int cont;
    palavra = strtok(frase," ");

    while (palavra != NULL){
        palavra = strtok(NULL," ");
        cont++;
        if (pos==cont)
            printf("%s",palavra);
    }
}

int main(){

    char frase[100]={ };
    int num=0;
    char *val;

    printf("Insira a frase: ");
    fgets(frase,sizeof(frase),stdin);
    printf("Insira o numero");
    scanf("%i",&num);
    dividir(frase,num);

return 0;
}
