#include <stdio.h>
#include <stdlib.h>
// ACtividad 1:
/*1. Pide un número por teclado e indica si es un número primo o no. Un número primo es
aquel que solo puede dividirse entre 1 y sí mismo. Por ejemplo: 25 no es primo, ya que
25 es divisible entre 5, sin embargo, 17 si es primo.*/

int main()
{
    int numero;
    int cont = 0;
    printf("Ingrese un numero y le dire si este es un numero primo\n[Numero primo es el que es divisible por 1 y por si mismo!]\n>");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            cont++;
        }
    }
    if (cont == 2)
    {
        printf("%d es un numero primo!\n ", numero);
    }
    else
    {
        printf("%d no es un numero primo :( \n", numero);
    }
    system("pause");

    return 0;
}
