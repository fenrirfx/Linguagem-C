#include <stdio.h>

void swap(int* a, int* b) // função que troca dois elementos
{
    int t = *a;
    *a = *b;
    *b = t;
}

int particao(int arr[], int low, int high) // funçao que usa o ultimo elemento como pivot, coloca-o na posição correcta e coloca os menores à esquerda e os maiores à direita
{
    int pivot = arr[high];
    int i = (low-1);

    for(int j = low; j<=high-1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }

        /*printf("%i ",arr[j]); vários testes
        printf("%i ",arr[high]);
        printf("%i ",arr[low]);
        printf("%i ",arr[j]);
        printf("\n");*/
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

void quicksort(int arr[], int low, int high) // função que implementa o quicksort, contem o array(arr[]), o low(principio do index) e o high(fim do index)
{
    if(low < high)
    {
        // pi e o index da partição
        int pi = particao(arr, low, high);
        // separa os elementos do array antes e depois da partição
        quicksort(arr, low, pi -1 );
        quicksort(arr, pi + 1, high);
    }
}

void printarray(int arr[], int size) // função para imprimir o array
{
    int i;
    for(i=0; i< size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() // função principal
{
    int arr[] = {89,70,14,100,34,6}; // ,9,16,54,32,10,1
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    printf("Array organizado: \n");
    printarray(arr, n);
    return 0;
}
