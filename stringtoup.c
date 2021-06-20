# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

char rmvesp(char * aux, char *nome, int size){

    int i=0,j=0;
    for(i=0;i<=size;i++){
        if(aux[i]!=' '){
            nome[j]=aux[i];
            j++;
        }
        if(aux[i]==' ' & aux[i-1]!=' '){
            nome[j]=aux[i];
            j++;
        }
    }
    puts(nome);
}
void uplower(char *aux){

    int i=0,val;
    val=strlen(aux);

    for(i=0;i<=val;i++){
        if (i==0)
           aux[i]=toupper(aux[i]);
        else
            aux[i]=tolower(aux[i]);
        while(aux[i]==' '){
            i++;
        }
        if(aux[i-1]==' ' && aux[i]!=' ')
            aux[i]=toupper(aux[i]);

        }
}


int main(){

    char nome[200]={0},aux[200]={0};
    int val;

    printf("Escreva o seu nome completo: ");
    fgets(aux,sizeof(aux),stdin);
    val=strlen(aux);
    uplower(aux);
    rmvesp(aux,nome,val);
    puts(aux);


return 0;
}
