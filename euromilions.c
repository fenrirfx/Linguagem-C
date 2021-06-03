#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

void swap(int* a, int* b){ // função que troca dois elementos

    int t = *a;
    *a = *b;
    *b = t;
}

void printarray(int arr[], int size){ // função para imprimir o array

    int i;
    for(i=0; i< size; i++)
        printf("%d ", arr[i]);
    printf("\n");

}

int numeros(int arr[], int size){ // função que gera os numeros randomizados conforme a condição

    int i,j=0,troca=1,aux=0,cont=0; // cria o array ate 5 de random ate 50.
    for(i=0;i<5;i++)
        arr[i]=(rand() %50)+1;

    while(troca==1){ // faz a verificaçao de numeros randomizados repetidos e troca, repete o ciclo ate nao serem detectados repetidos
        troca=0;
        for(i=0;i<5;i++){
            for(j=0;j<=5;j++){
                while(arr[i]==arr[j] & i!=j){
                    arr[j]=(rand() %50)+1;
                    troca=1;
                }
            }
        }
    }

    for(i=5;i<=6;i++){ // cria o array nas posiçoes 6 e 7 para a estrelas e valida repetidos
        arr[i]=(rand() %12)+1;
        while(arr[6]==arr[5])
            arr[5]=(rand() %12)+1;

        }
}


int newsort(int arr[], int size){ // percorre o array uma vez em todas as posições j e troca de posição consoante a condição valida tb as ultimas duas posiçoes de forma independente devido a serem as estrelas


    for(int i=0 ; i<= 4; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(arr[i]<arr[j])
                swap(&arr[j], &arr[i]);
        }
    }
    if(arr[5]>arr[6])
        swap(&arr[5], &arr[6]);
}

int main(){

    int arr[7]={0,0,0,0,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    srand(time(NULL));
    setlocale(LC_ALL,"");

    printf("Programa do Euromilhões:\n");
    printf("Vamos começar!!");
    system("pause");

    numeros(arr, n);
    newsort(arr,n);
    printarray(arr, n);

    system("pause");
return 0;
}

