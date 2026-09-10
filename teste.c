#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
        float produto1, produto2, produto3;

        printf("valor produto 1 :");
        scanf("%f", & produto1);

        printf("valor produto 2 :");
        scanf("%f", & produto2);

        printf("valor produto 3 :");
        scanf("%f", & produto3);

        if(produto1 < produto2 && produto1 < produto3)
        {
            printf("O produto 1 de valor %.2f é o mais barato!!! ", produto1);
        }
        else if (produto2 < produto1 && produto2 < produto3)
        {
           printf("O produto 2 de valor %.2f é o mais barato!!!", produto2);
        }
        else if (produto3 < produto2 && produto2 < produto1)
        {
            printf("O produto 3 de valor %.2f é o mais barato!!!", produto3);
        }
        else
            printf("Produtos com o mesmo preço de %.2f!!!", produto1);

return 0;
}
