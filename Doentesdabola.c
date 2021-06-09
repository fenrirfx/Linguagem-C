#include <stdio.h>

int main(){
    int pontos,pontos1,jornadas,dif=0,dif1=0;

    printf("Insira os pontos das duas equipas e as jornadas em falta:");
    scanf("%i %i %i",&pontos,&pontos1,&jornadas);

    dif=pontos-pontos1;
    if(dif<0)
        dif=-dif;
    dif1=jornadas*3;

    if(pontos>pontos1 && dif>=dif1)
        printf(":-D");
    else if (pontos>pontos1 && dif1>dif)
        printf(":-)");
    if(pontos1>pontos && dif1>dif)
        printf(":-|");
    else if (pontos1>pontos && dif<=dif1 || dif>dif1)
        printf(":-(");



return 0;
}
