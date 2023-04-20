#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, contador, f1 = 0, f2 = 1, pf;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (contador = 1; contador <= numero; contador++) {
        
        //nessa parte ocorre a parte de calculo do proximo numero da sequencia de fibonacci
        pf = f1 + f2;
        f1 = f2;
        f2 = pf;

        if (numero == f1) {
            printf("O %d pertence a sequencia de Fibonacci!\n", numero);
            return 0;
        }
    }
    
    //mostra caso nao faça parte de fibonacci
    printf("O %d nao pertence a sequencia de Fibonacci!\n", numero);
    return 0;
}
