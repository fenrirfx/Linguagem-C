#include <stdio.h>

int main()
{
    int cont[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int mult,mult1,aux,aux1;
    mult=1;
    mult1=5;
    aux=0;
    aux1=0;

    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(j==i)
                mult=mult*cont[i+1][j+1];
        }
    }
    printf("%i ",mult);
    printf("\n");

    for(int i=0;i<=5;i++)
    {
        for(int j=5;j>0;j--)
        {
            if(i+j==4)
                mult1=mult1*cont[i+1][j-1];
        }
    }
    printf("%i ",mult1);
    printf("\n");

    for(int l=0;l<5;l++)
    {
        for(int c=0+aux1;c<5;c++)
        {
            aux=cont[c][l];
            cont[c][l]=cont[l][c];
            cont[l][c]=aux;
        }
        aux1++;
    }
    printf("\n");
    for(int l=0;l<5;l++)
    {
        for(int c=0;c<5;c++)
            printf("%i ",cont[l][c]);
        printf("\n");
    }
    printf("\n");
    for(int l=0;l<5;l++)
    {
        for(int c=0;c<=4;c++)
        {
            if(l!=c & l+c!=4)
            {
                cont[l][c]=0;
                printf(" ");
            }
        printf("%i ",cont[l][c]);
        }
        printf("\n");
    }
return 0;
}
