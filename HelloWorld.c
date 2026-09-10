#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no
{
    int info; // Armazena uma informação
    struct no *prox; // aponta para o proximo elemento da lista

}No;


typedef struct Lista
{
    No* inicio; // Cria o inicio de uma lista ( L -> inicio ->info)

}Lista;



//Inicialização de uma lista

Lista* InicializaLista()
{
    return NULL;
}





//Criar uma lista (Vazia)

Lista* CriaLista()
{
    Lista *aux;
    aux =(lista *)malloc(sizeof(Lista));
    aux ->inicio = NULL
    return aux;
}










int main()
{
    Lista *L;
    L= InicializaLista();
    L= CriaLista()

    return 0;
}
