#include <stdio.h>

int main()
{
    int notas[10],nota,cont,media,aux,troca,min,max,cont1,p;
    cont1=0,media=0,troca=1,aux=0,min=0,max=21,p=0;
    int conte[10]={0,0,0,0,0,0,0,0,0,0};

    for(int i=1;i<=10;i++) // pede as 10 notas
    {
        do
        {
            printf("Insira a %i ª nota pff: ",i);
            scanf("%i",&nota);
        }
        while(nota<0 | nota>20);

        notas[cont]=nota;
        cont++;
    }
    for(int j=0;j<=9;j++)  //media
        media=media+notas[j];
    media=media/10;
    for(int i=0;i<9;i++) // verificar a moda
    {
        for(int j=i+1;j<10;j++)
        {
            if(notas[i]==notas[j])
            {
                conte[i]++;
            }

        }
    }
    for(int i=0;i<10;i++) // mostrar a moda e a primeira posicao da mesma se houver
    {
        if(conte[i]>conte[p])
            p=i;
    }
    if(conte[p]==0)
    {
        printf("nao existem repetidos: \n");
        p--;
    }
    else
    {
        printf("a moda e %i\n",notas[p]);
        printf("a primeira posicao da moda e:%i\n",p=p+1);
    }
    while(troca==1) // organiza o vector
    {
        troca=0;
        for(int k=0;k<9;k++)
        {
            if(notas[k]>notas[k+1])
            {
                aux= notas[k];
                notas[k]=notas[k+1];
                notas[k+1]=aux;
                troca=1;
            }
        }
    }
    for(int k=0;k<=9;k++)
    {
        if(notas[k]<=9)
            min=notas[k];
        if(notas[k]>=10 && notas[k]<max)
            max=notas[k];
    }
    printf("a media das notas e: %i\n",media);
    printf("a nota mais alta e: %i\n",notas[9]);
    printf("a nota mais baixa e: %i\n",notas[0]);
    printf("a negativa mais alta e: %i\n",min);
    printf("a positiva mais baixa e: %i\n",max);
return 0;
}
