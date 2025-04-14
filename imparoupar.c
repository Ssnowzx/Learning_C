#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
      if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }
    
     if (numero % 5 == 0) {
        printf("O número %d é múltiplo de 5.\n", numero);
    } else {
        printf("O número %d não é múltiplo de 5.\n", numero);
    }
    
    return 0;
}

