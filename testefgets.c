#include <stdio.h>

int main()
{
    char nome[100];
    int tamanho = sizeof(nome);
    printf("Digite seu nome: ");
    fgets(nome, 100, stdin);
    printf("%s", nome);
}