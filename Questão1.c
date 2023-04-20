#include<stdio.h>
#include<stdlib.h>

int indice =13, soma =0, k=0;

int main(){
    while (k < indice)
    {
        k = k+1;
        soma = soma + k;
    }
    printf("%d",soma);
    return 0;
}