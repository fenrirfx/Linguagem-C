#include <stdio.h>

int main()
{
    int c;
    int notas[10]={0,2,0,2,0,0,0,0,0,0};
    int aux[10]={0,0,0,0,0,0,0,0,0,0};

    c=0;

    for(int i=0;i<9;i++) // verificar a moda
    {
        for(int j=i+1;j<10;j++)
        {
            if(notas[i]==notas[j])
            {
                aux[i]++;
            }

        }
    }
    for(int i=0;i<10;i++) // mostrar a moda e a primeira posicao da mesma se houver
    {
        if(aux[i]>aux[c])
            c=i;
    }
    if(aux[c]==0)
    {
        printf("nao existem repetidos: \n");
        c--;
    }
    else
    {
        printf("a moda e %i\n",notas[c]);
        printf("a primeira posicao da moda e:%i\n",c=c+1);
    }

return 0;
}
