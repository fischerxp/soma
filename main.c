#include <stdio.h>
#include <stdlib.h>

/*Elaborar um programa em C que execute 4 vezes a solicita��o de dois
n�meros para o c�lculo da soma de ambos, apresente na tela o
resultado obtido para cada itera��o.*/
/*desenvolvedor: fischerxp*/

int main()
{
    int numero;
    int n1,n2;
    numero=1;
    while (numero<=4){
        printf("informe um numero para a soma: ");
        scanf("%d",& n1);
        printf("informe um numero para a soma: ");
        scanf("%d",& n2);
        printf("\nresultado da soma: %d\n", n1+n2);
        numero++;
    }

}

