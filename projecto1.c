#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
void apresentador(){

    int arr[10][10]={{0,0,0,1,1,1,1,1,0,0,0},{0,0,1,0,0,0,0,0,1,0,0},{0,0,1,0,0,0,0,0,1,0,0},{0,0,1,0,0,0,0,0,1,0,0},{0,0,1,0,0,0,0,0,1,0,0},{0,0,1,0,0,0,0,1,1,0,0},{0,0,0,1,1,1,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,1,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0}};

    for(int i=0;i<10;i++){

        for(int j=0;j<10;j++){

            if (arr[i][j]==0)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}
main(){

    setlocale(LC_ALL,"");
    apresentador();



}
