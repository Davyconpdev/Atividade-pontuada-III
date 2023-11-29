#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define n 5
#define MAX_LENGTH 370

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[n][MAX_LENGTH];
    char numero[n][MAX_LENGTH];
    int opcao;
    int i = 0;

    do
    {
        printf("\ncódigo |         opções        \n");
        printf("\n  1   -   adicionar um contato.  ");
        printf("\n  2   -  exibir contatos e sair. ");
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
                printf("\nnome:");
                fgets(nome[i], MAX_LENGTH, stdin);
                nome[i][strcspn(nome[i], "\n")] = '\0';
                printf("número telefônico:");
                fgets(numero[i], MAX_LENGTH, stdin);
                numero[i][strcspn(numero[i], "\n")] = '\0';
                i++;
            }
            break;
        }
    } while (opcao != 2);

    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\n%dº contato: %s\n %s\n", i + 1, nome[i], numero[i]);
    }

    return 0;
}