#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int inverte(long long num)
{
   unsigned long long inv=0;
   do{
      inv=inv*10 + (num%10);
      num=num/10;
      printf("%i ",inv);
    }while(num>0);

      return (inv);
}

int main()
{
    setlocale(LC_ALL,"");
    unsigned long long num,div;
    printf("Introduza o número para capicuar:\n");
    scanf("%d",&num);

        if(inverte(num)==num){
            printf("É uma Capicua\n");
        }else
            printf("Nao e capicua\n");
            system("pause");
    printf("%d\a", sizeof(unsigned long));
    return 0;
}
