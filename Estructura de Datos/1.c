/*Listas, Pilas, Colas.
1)Implementar una función que recibe una lista de enteros L y un número entero n de forma
que modifique la lista mediante el borrado de todos los elementos de la lista que tengan este
valor*/

#include <stdio.h>
#include <stdlib.h>
int eliminar_elemento(int *p, int delete);
int main()
{
    int elementos;
    printf("De cuantos elementos quiere la lsita?\n>");
    scanf("%d", &elementos);
    int lista[elementos];
    int *p;
    p = &lista[0];
    // Creo la lista
    for (int i = 0; i < elementos; i++)
    {
        printf("Ingrese el %d elemento:\n>", i + 1);
        scanf("%d", &lista[i]);
    }
    // Muesro la lista creada
    system("cls");
    printf("ESTA ES SU LISTA:\n");
    for (int i = 0; i < elementos; i++)
    {
        printf("%d: %d\n", i + 1, lista[i]);
    }
    // Pedimos el valor a eliminar
    int delete;
    printf("QUE ELEMENTO LE GUSTARIA ELIMINAR DE LA LISTA?\n>");
    scanf("%d", &delete);

    // Usamos la funcion

    return 0;
}


int eliminar_elemento(int *p, int delete)
{
    int cont = 0;
    while (p != NULL)
    {
        printf("%d", p[cont]);
        p = p+1;
    }



    return 0;
}
