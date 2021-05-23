#include <stdio.h>

int main()
{
    int m,l;
    m=5;
    l=0;

    for (int i=1;i<=m;i++)
    {
        for(l=m-i;l>0;l--)
            printf(" ");
        for (int j=1;j<=i;j++)
            printf("*");
    printf("\n");
    }
}
