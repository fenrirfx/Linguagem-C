#include <stdio.h>

int main()
{
    int notas[10],troca,aux,nota,cont,troca1;
    aux=0,troca=1,nota=0,cont=0,troca1=1;

    for(int i=1;i<=10;i++)
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
    while(troca==1)
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
    while(troca1==1)
    {
        troca1=0;
        for(int k=0;k<9;k++)
        {
            if(notas[k]%2==0)
            {
                if(notas[k]<notas[k+1] & notas[k+1]%2 !=0)
                {
                    aux= notas[k];
                    notas[k]=notas[k+1];
                    notas[k+1]=aux;
                    troca1=1;
                }
            }
        }
    }
    for(int i=0;i<10;i++)
        printf("%i ",notas[i]);

return 0;
}
