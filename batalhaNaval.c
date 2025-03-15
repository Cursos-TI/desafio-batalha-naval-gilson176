#include <stdio.h>


int main(){

char lista[] = "  A B C D E F G H I J";
int tabuleiro[10][10] = {0};
printf("%s\n",lista);
int navio1[3] = {3,3,3};
int navio2[3] = {3,3,3};

tabuleiro[0][0]=navio1[0];
tabuleiro[0][1]=navio1[1];
tabuleiro[0][2]=navio1[2];


tabuleiro[4][4]=navio1[0];
tabuleiro[5][4]=navio1[1];
tabuleiro[6][4]=navio1[2];




for(int i = 0; i < 10; i++){

        printf("%d ",i+1);
    for(int j = 0; j < 10; j++){


        printf("%d ",tabuleiro[i][j]);











    }
printf("\n");






}