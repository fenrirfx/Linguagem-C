#include <stdio.h>

int main()
{
    int oper,mult,cont1,cont2;
    cont2=1;
    oper=1;

    while(cont2<10)
    {
        cont1=1;
        while (cont1<=10)
        {
           mult=cont1*oper;
           printf("\n%i",mult);
           cont1=cont1+1;
            if (cont1>10)
            {
                oper=oper+1;
                cont2=cont2+1;
                cont1=11;
            }
        }
    }
}
