#include <stdio.h>

int main()
{
    int num1,result,i;
    result=0;
    printf("Insira um numero: ");
    scanf("%i",&num1);

    if(num1<=1)
    {
        result=1;
    }
    for(i=2;i<=num1/2;i++)
    {
        if(num1%i==0)
        {
            result++;
        }
    }
    if (result==0)
    {
        printf("e um numero primo");
    }
    else
    {
        printf("nao e um numero primo");
    }
return 0;
}

