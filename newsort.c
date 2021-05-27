#include <stdio.h>

void swap(int* a, int* b){ // função que troca dois elementos

    int t = *a;
    *a = *b;
    *b = t;
}
void troca(int a, int b){

    int t = a;
    a = b;
    b = t;
}

int newsort(int arr[], int size){ // percorre o array uma vez em todas as posições j e troca de posição consoante a condição

    for(int i=0 ; i<= size; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(arr[i]<arr[j])
                swap(&arr[i], &arr[j]);
        }

    }
}
void printarray(int arr[], int size){ // função para imprimir o array

    int i;
    for(i=0; i< size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){

    int arr[]={100,1,10,20,5,7,9,30,21,45,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    newsort(arr, n-1);
    printarray(arr,n);

return 0;
}
