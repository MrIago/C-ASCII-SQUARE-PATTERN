#include<stdio.h>

main(){

//vou criar um for para percorrer os cantos de um quadrado

int y,x;
scanf("%d", &y);
x = y;
int cy, cx;
char q[y][x];
int c = 0;

if(x>=0 || x<=52){
while(c<(float)x/2){
for(cy=c, cx=c; cx<x-c; cx++) q[cy][cx] = 65+c; // topo
for(cy=c, cx=c; cy<y-c; cy++) q[cy][cx] = 65+c; // esquedo
for(cy=y-c-1, cx=c; cx<x-c; cx++) q[cy][cx] = 65+c; // base
for(cy=c, cx=x-c-1; cy<y-c; cy++) q[cy][cx] = 65+c; // direto
c++;
}

printf("\n");

for(cy=0; cy<y; cy++) {
for(cx=0; cx<x; cx++) printf("%c", q[cy][cx]);
printf("\n"); }

}}

