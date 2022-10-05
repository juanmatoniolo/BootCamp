/*5. Pedir al usuario que ingrese un número repetidamente hasta que ingrese un -1 y en ese
caso se terminará el programa.
Al terminar, mostrará lo siguiente:
a. – mayor número introducido
b. – menor número introducido
c. – suma de todos los números
d. – suma de los números
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lista_numero[50] = {};
    int indice = -1;
    int numero;

    do
    {
        indice++;
        printf("ingrese numero enteros positivos, ingrese -1 para dejar de cargar numeros:\n>");
        scanf("%d", &numero);
        lista_numero[indice] = numero;

    } while (lista_numero[indice] != -1);

    system("cls");

    printf("LOS NUMEROS QUE INGRESASTE FUERON: \n");
    for (int i = 0; i < indice; i++)
    {
        printf("%d: %d\n", 1 + i, lista_numero[i]);
    }

    printf("LA SUMA DE TODOS ESTOS NUMEROS ES:\n");
    int suma_lista = 0;
    for (int i = 0; i < indice; i++)
    {
        suma_lista = suma_lista + lista_numero[i];
    }
    printf("%d", suma_lista);

    int *lista;
    lista = &lista_numero[0];

    for (int i = 0; i < indice; i++)
    {
        for (int j = 1; j < indice; j++)
        {
            if (lista[i] < lista[j])
            {
                int aux;
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }

    printf("\n\n EL NUMERO MAS CHICO INGRESADO ES:\n%d", lista_numero[1]);
    printf("\n EL NUMERO MAS GRANDE INGRESADO ES:\n%d", lista_numero[0]);


/* LO USE PARA ASEGURARME EL ORDENAMIENTO DE LA LISTA Y ASI SABER QUE RETORNAR 
    printf("\n\n\tLISTA ORDENADA:\n");
    for (int i = 0; i < indice; i++)
    {
        printf("%d: %d\n", i + 1, lista_numero[i]);
    }
*/
    return 0;
}
