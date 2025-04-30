#include <stdio.h>

int main()
{
    int tamanho;
    char nome[50];
    printf("digite o nome do aluno: \n");
    scanf("%s", nome);
    printf("digite o numero de notas: \n");
    scanf("%d", &tamanho);

    int notas[tamanho];
    int media = 0;

    for (int i = 0; i < tamanho; i++)
    {
        printf("digite a nota %d: \n", i + 1);
        scanf("%d", &notas[i]);
        media = media + notas[i];
    }
    media = media / tamanho;
    printf("A media do aluno %s e: %d\n", nome, media);
    if (media > 5)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado\n");
    }
    return 0;
}
