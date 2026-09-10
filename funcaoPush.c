#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct{
    int dia, mes, ano;
}Data;

typedef struct
{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no
{
    Pessoa p;
    struct no *proximo;
}No;

Pessoa ler_pessoa()
{
        Pessoa p;
    printf("\n Digite nome e data de nascimento dd mm aaaa: \n");
    scanf("%49[^\n]%d%d%d", &p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}





// Operação Push
No* empilhar_pilha(No* Topo)
    No * novo = malloc(sizeof (No));
    if(novo){
     novo -> p = ler_pessoa();
     novo -> proximo = Topo;
     return novo;

    }
    else
    {
       printf("\n Erro ao alocar");
    }
    return NULL;



int main()
{
    No *Topo = NULL; // 'T' maiúsculo
    int opcao;

    do {
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao); // Adicionado o &
        getchar();
        switch(opcao)
        {
            case 1: // Adicionado espaço
                Topo = empilhar_pilha(Topo); // Corrigido o 'T' e o nome da função
                break;

            case 2: // Adicionado espaço
                break;

            case 3: // Adicionado espaço
                break;

            default:
                if (opcao != 0)
                    printf("\nOpção invalida!!!!!\n"); // Removido parênteses duplo
        }
    } while (opcao != 0);

    return 0;
}
