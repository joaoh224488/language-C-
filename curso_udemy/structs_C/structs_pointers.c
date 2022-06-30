#include <stdio.h>
#include <stdlib.h>

typedef struct par
{
    int x;
    int y;
} par;

void teste ( par *p){

    p->x = 45;
    p->y = 90;
}


int main(){

    par *p =  (par*)malloc(sizeof(par) * 2);  // criando um ponteiro que aponta para um array de structs

    p->x = 1;

    p[0].y = 2;  // Elemento 0 do array em p


    (p+1)->x = 3; // p aponta para o primeiro elemeto do ponteiro *p. Por sua vez, p + 1 aponta para o segundo

    p[1].y = 4;

    printf("p[0]:       x: %d  y: %d\n", p->x, p->y);
    printf("p[1]:       x: %d  y: %d\n", (p+1)->x, (p+1)->y);

    par ponto;

    teste(&ponto);

    printf("teste:      x: %d      y: %d\n", ponto.x, ponto.y);




    return 0;
}