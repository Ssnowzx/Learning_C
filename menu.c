#include <stdio.h>
#include <stdlib.h>

void exibirMenu()
{
    int opcao;

    printf("\n===== MENU =====\n");
    printf("1 - Função Triângulo\n");
    printf("2 - Função Média\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("Função Triângulo\n");
        exibirMenu();
    }
    else if (opcao == 2)
    {
        printf("Função Média\n");
        exibirMenu();
    }
    else if (opcao == 3)
    {
        printf("Saindo do programa...\n");
    }
    else
    {
        printf("Opção inválida! Tente novamente.\n");
        exibirMenu();
    }
}

int main()
{
    exibirMenu();
    return 0;
}
