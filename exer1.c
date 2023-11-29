#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define n 5

int main() {
setlocale(LC_ALL,"portuguese");

int i = 0, idade [n];
int maioridade = 0, menoridade = 9999;
float peso [n], altura[n];
float maiorpeso = 0, maioraltura = 0, menorpeso = 9999, menoraltura = 9999;
char nome[n] [100];

for (i = 0; i < n; i++)
{
printf("\nInforme seu nome: ");
gets(nome[i]);
printf("Informe sua idade: ");
scanf("%d",&idade[i]);
printf("Informe seu peso: ");
scanf("%f",&peso[i]);
printf("Informe sua altura: ");
scanf("%f",&altura[i]);
fflush(stdin);

    maioraltura = altura[i] > maioraltura ? altura[i] : maioraltura;
    menoraltura = altura[i] < menoraltura ? altura[i] : menoraltura;

    maioridade = idade[i] > maioridade ? idade[i] : maioridade;
    menoridade = idade[i] < menoridade ? idade[i] : menoridade;

    maiorpeso = peso[i] > maiorpeso ? peso[i] : maiorpeso;
    menorpeso = peso[i] < menorpeso ? peso[i] : menorpeso;

}
system("cls || clear");
for (i = 0; i < n; i++)
{
    printf("\nNome: %s\n",nome[i]);
    printf("Idade: %d Anos\n",idade[i]);
    printf("Peso: %.2f Kg\n",peso[i]);
    printf("Altura: %.2f Metro(s)\n",altura[i]);

}
printf("\n");
printf("\n");
printf("MAIOR idade: %d Anos\n", maioridade);
printf("MENOR idade: %d Anos\n",menoridade);

printf("\nMAIOR altura: %.2f Metro(s)\n",maioraltura);
printf("MENOR altura: %.2f Metro(s)\n",menoraltura);

printf("\nMAIOR peso: %.2f Kg\n",maiorpeso);
printf("MENOR peso: %.2f Kg\n",menorpeso);
 
 return 0;
}