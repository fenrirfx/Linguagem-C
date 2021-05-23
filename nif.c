#include <stdio.h>

int main(){

    int nif,nifv[8],resto, digi;
    int result=0;

    printf("Insira o seu NIF: ");
    scanf("%i",&nif);

    for(int i=9;i>=1;i--){
        nifv[i]=nif%10;
        nif/=10;
    }
    if((nif<=999999999||nif>999999999)&&((nifv[1]==1||nifv[1]==2||nifv[1]==3)||(nifv[1]==4&&nifv[2]==5)||(nifv[1]==5)||(nifv[1]==6)||(nifv[1]==7&&nifv[2]==0)||(nifv[1]==7&&nifv[2]==4)||(nifv[1]==7&&nifv[2]==5)||(nifv[1]==8)||(nifv[1]==9))){

        for(int i=9;i>=2;i--)
            result+=nifv[10-i]*i;

        resto=result%11;

        if(resto<2)
            digi=0;
        else
            digi=11-resto;
        switch(nifv[1]){
            case 1:
                printf("Nif Particular ou Empresario em nome individual");
                break;
            case 2:
                printf("Nif Particular ou Empresario em nome individual");
                break;
            case 3:
                printf("Nif Particular ou Empresario em nome individual");
                break;
            case 4:
                printf("cidadão não residente");
                break;
            case 5:
                printf("Pessoa Colectiva");
                break;
            case 6:
                printf("Organismo da Administração Pública Central, Regional ou Local");
                break;
            case 7:
                if(nifv[2]==0||nifv[2]==4||nifv[2]==5)
                    printf("Herança Indivisa");
                if(nifv[2]==1)
                    printf("Não residentes colectivos sujeitos a retenção na fonte a título definitivo");
                if(nifv[2]==2)
                    printf("Fundos de investimento");
                break;
        }
        printf("\no digito de controlo e: %i", digi);
    }
    else
        printf("NIF invalido!");

return 0;
}
