#include<stdio.h>
#include<windows.h>

void cria_quadrado(int y, int i){

int x = y;
int cy, cx;
char q[y][x];
int c = 0;


while(c<(float)x/2){
for(cy=c, cx=c; cx<x-c; cx++) q[cy][cx] = i+c; // topo
for(cy=c, cx=c; cy<y-c; cy++) q[cy][cx] = i+c; // esquedo
for(cy=y-c-1, cx=c; cx<x-c; cx++) q[cy][cx] = i+c; // base
for(cy=c, cx=x-c-1; cy<y-c; cy++) q[cy][cx] = i+c; // direto
c++;
}

printf("\n");

for(cy=0; cy<y; cy++) {
for(cx=0; cx<x; cx++) printf("%c", q[cy][cx]);
printf("\n"); }

}


main(){

//vou criar um for para percorrer os cantos de um quadrado

char stop = 's';

while(stop=='s'){

printf("\n| 1 - SIMBOLOS  |\n| 2 - NUMEROS   |\n| 3 - MINUSCULO |\n| 4 - MAIUSCULO |\n| 5 - QUADRADOS |\n\n");

int c,y,i;
printf(">>> ");
scanf("%d", &c);
printf("\n");

if(c == 1){

printf("1 - 12: ");
scanf("%d", &y);

if(y >= 1 && y <= 12) cria_quadrado(y, 1);

}


if(c == 2){

printf("1 - 20: ");
scanf("%d", &y);

if(y >= 1 && y <= 20) cria_quadrado(y, 48);

}


if(c == 3){

printf("1 - 52: ");
scanf("%d", &y);

if(y >= 1 && y <= 52) cria_quadrado(y, 97);

}




if(c == 4){

printf("1 - 52: ");
scanf("%d", &y);

if(y >= 1 && y <= 52) cria_quadrado(y, 65);

}


if(c == 5){

printf("1 - 6: ");
scanf("%d", &y);

if(y >= 1 && y <= 6) cria_quadrado(y, 176);

}


printf("\n\nCaso estaja vazio o numero de lados eh invalido para o modo escolhido.\n\n");

printf("REPITIR [s/n] ? ");

scanf(" %c", &stop);

system("cls");

} }


