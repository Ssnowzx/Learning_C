#include <stdio.h>

float lerNota(int numeroNota);
void funcaoTriangulo();
void funcaoMedia();
void verificarNumero();
void verificarAnoBissexto(int ano);
void funcaoTabuada();
void imprimirTabuada(int num);

void exibirMenu()
{
    int opcao, ano;
    do
    {
        printf("\n===== MENU =====\n");
        printf("1 - Verifica Triângulo\n");
        printf("2 - Verifica Média\n");
        printf("3 - Verificar número (par e múltiplo de 5)\n");
        printf("4 - Verificar Ano Bissexto\n");
        printf("5 - Função Tabuada\n");
        printf("6 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            funcaoTriangulo();
        }
        else if (opcao == 2)
        {
            funcaoMedia();
        }
        else if (opcao == 3)
        {
            verificarNumero();
        }
        else if (opcao == 4)
        {
            printf("Digite um ano: ");
            scanf("%d", &ano);
            verificarAnoBissexto(ano);
        }
        else if (opcao == 5)
        {
            funcaoTabuada();
        }
        else if (opcao == 6)
        {
            printf("Saindo do programa...\n");
        }
        else
        {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 6);
}

void funcaoTriangulo()
{
    float lado1, lado2, lado3;
    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &lado1);
    printf("Digite o valor do segundo lado: ");
    scanf("%f", &lado2);
    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &lado3);
    if (lado1 == lado2 && lado2 == lado3)
        printf("Triângulo Equilátero\n");
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        printf("Triângulo Isósceles\n");
    else
        printf("Triângulo Escaleno\n");
}

float lerNota(int numeroNota)
{
    float nota;
    printf("Digite a nota %d (0-10): ", numeroNota);
    scanf("%f", &nota);
    if (nota < 0 || nota > 10)
    {
        printf("Erro: A nota deve estar entre 0 e 10. Digite novamente.\n");
        return lerNota(numeroNota);
    }
    return nota;
}

void funcaoMedia()
{
    int tamanho;
    char nome[50];

    printf("Digite o nome do aluno: \n");
    scanf("%49s", nome);

    printf("Digite o número de notas: \n");
    scanf("%d", &tamanho);

    float notas[tamanho];

    float soma = 0.0;
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    float media = soma / tamanho;
    printf("A média do aluno %s é: %.2f\n", nome, media);
    if (media > 5)
        printf("Você está aprovado.\n");
    else
        printf("Você está reprovado.\n");
}

void verificarNumero()
{
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
        printf("O número %d é par.\n", numero);
    else
        printf("O número %d é ímpar.\n", numero);
    if (numero % 5 == 0)
        printf("O número %d é múltiplo de 5.\n", numero);
    else
        printf("O número %d não é múltiplo de 5.\n", numero);
}

void verificarAnoBissexto(int ano)
{
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        printf("%d é um ano bissexto.\n", ano);
    else
        printf("%d não é um ano bissexto.\n", ano);
}

void funcaoTabuada()
{
    int numero;
    printf("Digite um número para tabuada: ");
    scanf("%d", &numero);
    printf("Tabuada de %d:\n", numero);
    imprimirTabuada(numero);
}

void imprimirTabuada(int num)
{
    int i;
    for (i = 1; i <= 13; i++)
    {
        printf("%d x %d = %d\n", i, num, i * num);
    }
}

int main()
{
    exibirMenu();
    return 0;
}
