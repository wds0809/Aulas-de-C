#include <stdio.h>

int main(){

    // EXERCICIO PARES DE 0 A 10
    /*int i = 0;

    while (i <= 10){

        if(i % 2 == 0)
        {
            printf("O número %d é par! \n", i);
        }

        i++;
    }*/
    
    // EXERCICIO 2
    /*int numero; 

    do{
        printf("Digite um número par para sair do programa...");
        scanf("%d", &numero);
        if(numero % 2 == 0){
            printf("%d é par! \n", numero);
        } else {
            printf("%d é impar! \n", numero);
        }
    } while (numero % 2 != 0);

    printf("Você digitou um número par, saindo do programa...");*/

    int numero, i;

    printf("Digite em número para calcularmos a tabuada... \n");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d \n", i, numero, i * numero);
    }

    return 0;
}