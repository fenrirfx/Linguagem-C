#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

int main(){

    int jogadas,jog=0,random,random1,cont=0,cont1=0;
    char c;
    srand(time(NULL));
    setlocale(LC_ALL,"");

    printf("Jogo dos dados");
    printf("prima ENTER para continuar");
    system("cls");
    printf("Escolha o numero de jogadas:");
    scanf("%i",&jogadas);

    while (jogadas>0){

        jogadas--;
        jog++;

        printf("Jogador %i prima ENTER para lançar os dados\n",jog);
        do{
            c=getch();
        }
        while(c!=13);
        random=(rand()%6)+1;random1=(rand()%6)+1;
        printf("primeiro dado %i , segundo dado %i \n",random,random1);
        system("pause");
        cont+=random+random1;
        system("cls");

        jog++;

        printf("Jogador %i prima ENTER para lançar os dados\n",jog);
        do{
            c=getch();
        }
        while(c!=13);
        random=(rand()%6)+1;random1=(rand()%6)+1;
        printf("primeiro dado %i , segundo dado %i \n",random,random1);
        system("pause");
        cont+=random+random1;
        system("cls");

        jog=0;
    }
    if(cont>cont1)
        printf("O jogador 1 ganhou!! Pontuação %i\n", cont);
    else
        printf("O jogador 2 ganhou!! Pontuação %i\n",cont1);

    system("pause");


return 0;
}
