#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>


typedef struct no
{
    int info;
    struct no* prox;

}No;


typedef struct Lista
{
    No* inicio;

}Lista;



void InsereL_inicio(Lista *velho, int valor)
{
    velho ->inicio=AuxInsere(velho->inicio, valor);
}


No* AuxInsere (No* antigo, int v)
{
    No *novo;
    novo= (No*)malloc(sizeof(No));
    novo-> info = v;
    novo-> prox = antigo;
    return novo;
}




int main()
{

}
