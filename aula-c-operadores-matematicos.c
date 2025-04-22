#include <stdio.h>

int main (){
  
    int n1, n2;
    int soma, sub, mult, div;

    printf("Digite um número inteiro: \n");
    scanf("%d", &n1);

    printf("Digite outro número inteiro: \n");
    scanf("%d", &n2);

    // OPERAÇÃO SOMA
    soma = n1 + n2;

    // OPERAÇÃO SUBTRAÇÃO
    sub = n1 - n2;

    // OPERAÇÃO MULTIPLICAÇÃO
    mult = n1 * n2;

    // OPERAÇÃO DIVISÃO
    div = n1 / n2;


    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", sub);
    printf("A multiplicação é: %d\n", mult);
    printf("A divisão é: %d\n", div);
}