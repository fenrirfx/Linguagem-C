# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

void removespaco(char *aux){

    int j=0;
    char ult='\0';
    for (int i=0;aux[i] != '\0';i++){
        if (aux[i]!=' ' || ult!=' '){
            aux[j]=aux[i];
            j++;
            ult = aux[i];
        }
    }
    aux[j]='\0';
}

int main(){

    char nome[200]={0},aux[200]={0};
    int val=0,i=0;

    printf("Escreva o seu nome completo: ");
    fgets(aux,sizeof(aux),stdin);
    val=strlen(aux);

    for(i=0;i<sizeof(aux);i++){
        if (i==0)
           aux[i]=toupper(aux[i]);
        else
            aux[i]=tolower(aux[i]);
        while(aux[i]==' '){
            i++;
        }
        if(aux[i-1]==' ')
            aux[i]=toupper(aux[i]);

        }

    removespaco(aux);
    puts(aux);


return 0;
}
