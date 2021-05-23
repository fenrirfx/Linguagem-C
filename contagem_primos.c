#include <stdio.h>

int main()
{
    int nprimo,primo,primos[10000],nprimos[10000],cont,num,cont1,cont2,i,div;
    div=0,cont=1,cont1=0,nprimo=1,primo=1;


    printf("Escreva um numero: ");
    scanf("%i",&num);

    for (cont=2;cont<=num;cont++)
    {
            for(i=1;i<=cont;i++)
            {
                div=cont%i;
                if(div==0)
                    cont1++;
                else
                    cont2++;
            }
            if(cont1==2)
            {
                primos[primo]=cont;
                primo++;
            }
            else
            {
                nprimos[nprimo]=cont;
                nprimo++;
            }
            cont1=0;

    }
    printf("Numeros primos: ");
    for(int j=1;j<=primos[j];j++)
        printf("%i ",primos[j]);
    printf("\n");
    printf("Numeros nao primos: ");
    for(int k=1;k<=nprimos[k];k++)
        printf("%i ",nprimos[k]);

return 0;
}
