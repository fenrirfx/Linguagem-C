#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

void vector(int arr[], int size){

    for(int i=0;i<7;i++)
    {
        arr[i]=(rand() %30)+1;
        printf("%i ", arr[i]);
    }
}
void array(int *matriz, int size){

    for(int i=0;i<25;i++)
    {
        matriz[i]=(rand()%30)+1;
    }
    printf("\n");
}
int main(){

    int arr[7],matriz[5][5], j=5, d=2,random=0,random1=0,resp=0,acertos=0;
    char c;
    int n = sizeof(arr)/sizeof(arr[0]);

    setlocale(LC_ALL,"Portuguese");
    SetConsoleTitle("O Jogo da Memoria");
    srand(time(NULL));

    printf("Este jogo consiste em memorizar o que lhe é informado no ecrã, para depois inserir correctamente as posições que forem pedidas\n\n");
    printf("Todos os numeros e poições seram gerados aleatóriamente\n\n");
    printf("Prima ENTER para começar");

    do{
        c=getch();
    }
    while(c!=13);

    vector(arr,n);
    do
    {
        system("cls");
        printf("Observe os números apresentados, tem %i segundos\n\n", j);
        j--;
        for(int i=0;i<7;i++)
            printf("%i ", arr[i]);
        Sleep(1000);
    }while(j>0);

    system("cls");
    printf("Indique os numeros nas posições pedidas ***Nível 1***\n\n");

    for(int i=0;i<d;i++){
        random=(rand() %7)+1;
        printf("Indique o número da posição %i:",random);
        scanf("%i",&resp);
        if(arr[random]==resp)
            acertos++;
    }

    d+=2;
    j=5;

    vector(arr,n);

    do
    {
        system("cls");
        printf("Observe os números apresentados, tem %i segundos\n\n", j);
        j--;
        for(int i=0;i<7;i++)
            printf("%i ", arr[i]);
        Sleep(1000);
    }while(j>0);

    system("cls");
    printf("Indique os numeros nas posições pedidas ***Nível 2***\n\n");

    for(int i=0;i<d;i++){
        random=(rand() %7)+1;
        printf("Indique o número da posição %i:",random);
        scanf("%i",&resp);
        if(arr[random]==resp)
            acertos++;
    }

    vector(arr,n);
    j=5;
    d+=3;

    do
    {
        system("cls");
        printf("Observe os números apresentados, tem %i segundos\n\n", j);
        j--;
        for(int i=0;i<7;i++)
            printf("%i ", arr[i]);
        Sleep(1000);
    }while(j>0);

    system("cls");
    printf("Indique os numeros nas posições pedidas ***Nível 3***\n\n");

    for(int i=0;i<d;i++){
        printf("Indique o número da posição %i:",i+1);
        scanf("%i",&resp);
        if(arr[i]==resp)
            acertos++;
    }

    system("cls");
    printf("Etapa Dois, memorize os números na matriz e depois introduza-os conforme pedido\n\n");
    printf("Prima ENTER para começar");


    do{
        c=getch();
    }
    while(c!=13);

    array(*matriz,n);
    j=5;
    d=2;

    do
    {
        system("cls");
        printf("Observe os números apresentados, tem %i segundos\n\n", j);
        j--;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                printf("%i ", matriz[i][j]);
            }
            printf("\n");
        }
        Sleep(1000);
    }while(j>0);

    system("cls");
    printf("Indique os numeros nas posições pedidas ***Nível 1***\n\n");

    for(int i=0;i<d;i++){
        random=(rand() %5);
        random1=(rand() %5);
        printf("Indique o número da posição L%i/C%i:",random+1,random1+1);
        scanf("%i",&resp);
        if(arr[i]==resp)
            acertos++;
    }

    array(*matriz,n);
    j=5;
    d+=3;

    do
    {
        system("cls");
        printf("Observe os números apresentados, tem %i segundos\n\n", j);
        j--;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                printf("%i ", matriz[i][j]);
            }
            printf("\n");
        }
        Sleep(1000);
    }while(j>0);

    system("cls");
    printf("Indique os numeros nas posições pedidas ***Nível 2***\n\n");

    for(int i=0;i<d;i++){
        random=(rand() %5);
        random1=(rand() %5);
        printf("Indique o número da posição L%i/C%i:",random+1,random1+1);
        scanf("%i",&resp);
        if(arr[i]==resp)
            acertos++;
    }

    array(*matriz,n);
    j=5;
    d+=5;

    do
    {
        system("cls");
        printf("Observe os números apresentados, tem %i segundos\n\n", j);
        j--;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                printf("%i ", matriz[i][j]);
            }
            printf("\n");
        }
        Sleep(1000);
    }while(j>0);

    system("cls");
    printf("Indique os numeros nas posições pedidas ***Nível 3***\n\n");

    for(int i=0;i<d;i++){
        random=(rand() %5);
        random1=(rand() %5);
        printf("Indique o número da posição L%i/C%i:",random+1,random1+1);
        scanf("%i",&resp);
        if(arr[i]==resp)
            acertos++;
    }

    printf("\nO seu resultado é: %i no total de 25 possíveis\n",acertos);

    if (acertos >=25)
        printf("\nEXCELENTE!!\n");
    else if(acertos <25 & acertos >19)
        printf("\nBOM!\n");
    else if(acertos <20 & acertos >14)
        printf("\nRazoavél\n");
    else if(acertos <15 & acertos >9)
        printf("\nMedíocre!\n");
    else if(acertos <10 & acertos >5)
        printf("\nPéssimo!!\n");
    else if(acertos<5)
        printf("\nPIOR ERA IMPOSSÍVEL!!!\n");

    system("pause");

}
