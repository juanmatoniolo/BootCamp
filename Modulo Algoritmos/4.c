/*4. Generar un número aleatorio comprendido entre 0 y 1000. Pedir, a continuación, al
usuario adivinar el número escogido por el ordenador. Para ello, debe introducir un
número comprendido entre 0 y 1000. Se compara el número introducido con el
calculado por el ordenador y se muestra en la consola "es mayor" o "es menor" en
función del caso. Se repite la operación hasta que el usuario encuentra el número.
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    int num_aleatorio;
    int num_usuario;
    int intentos = 0;

    srand(time(NULL));
    num_aleatorio = rand() % 1000 + 1;
    printf("Adivine en que numero estoy pensando: \n");

    do
    {
        scanf("%d", &num_usuario);
        if (num_usuario == num_aleatorio)
        {
            printf("Felicitaciones, adivino!");
        }
        else if (num_usuario < num_aleatorio)
        {
            printf("El numero que estoy pensando es mayor al que ingreso\n>");
        }
        else
        {
            printf("El numero que estoy pensando es menor al que ingreso\n>");
        }
        intentos++;
    } while (num_usuario != num_aleatorio);

    printf("\n\n\t Felicitaciones nuevamente le llevo %d intentos \n\n", intentos);

    return 0;
}