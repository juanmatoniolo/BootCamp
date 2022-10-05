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

int main(){
    int lista_numero[]={};
    int indice = -1;
    int numero; 

    do
    {
        indice++;
        printf("ingrese -1 para dejar de cargar numeros:\n>");
        scanf("%d",&numero);
        lista_numero[indice] = numero;

    } while (lista_numero[indice] != -1);

    for (int i = 0; i < indice; i++)
    {
        printf("%d\n",lista_numero[i]);
    }
    

    return 0;
}











