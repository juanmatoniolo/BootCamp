/*3)Construir una función que sume los elementos de una lista de enteros recursivamente.*/
#include <stdio.h>
#include <stdlib.h>
int sumar_lista(int *lista, int);

int main()
{
    int numero;
    printf("Cuantos numeros quiere ingresas?");
    scanf("%d", &numero);
    int lista_numero[numero];

    for (int i = 0; i < numero; i++)
    {
        printf("Ingrese el %d numero:\n>", i + 1);
        scanf("%d", &lista_numero[i]);
    }

    int *p;
    p = &lista_numero[0];
    int stop = 0;
    sumar_lista(p, stop);

    return 0;
}

int sumar_lista(int *lista, int stop)
{
    int cont = 0;
    int aux = 0;

    if (lista != stop)
    {
        lista + cont = cont;
        
        lista++;
        sumar_lista(lista, stop);
    }

    printf("%d", cont);
    return 0;
}
