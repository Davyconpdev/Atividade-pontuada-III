#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define n 5
#define MAX_LENGTH 370

int main()
{
    setlocale(LC_ALL, "portuguese");

    char produto[n][MAX_LENGTH];
    int quantidade[n];
    float preco[n], valorfinal;
    int i = 0;
    int opcao;

    do
    {
        printf("\ncódigo |           opções            \n");
        printf("\n  1   -   adicionar uma venda.        \n");
        printf("\n  2   - exibir total de vendas e sair.\n");
        printf("\n");
        printf("\nescolha a opção desejada:");
        scanf("%d", &opcao);

        system("cls || clear");

        switch (opcao)
        {
        case 1:
            if (i < n)
            {
                fflush(stdin);
                printf("\nnome do produto:");
                fgets(produto[i], MAX_LENGTH, stdin);
                produto[i][strcspn(produto[i], "\n")] = '\0';

                printf("valor(R$):");
                scanf("%f", &preco[i]);

                printf("quantidade:");
                scanf("%d", &quantidade[i]);
                fflush(stdin);

                i++;
                valorfinal = preco[i] * quantidade[i];
            
            }
            break;
        }

    } while (opcao != 2);

    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\n%dº produto: %s\n", i + 1, produto[i]);
        printf("preço: %.2f\n", preco[i]);
        printf("quantidade: %d\n", quantidade[i]);
        printf("total: %.2f\n", valorfinal);
    }
    fflush(stdin);


    return 0;
}