/*2. Escribe una aplicación que solicite al usuario que ingrese una contraseña cualquiera.
Después se le pedirá que ingrese nuevamente la contraseña, con 3 intentos. Cuando
acierte ya no pedirá más la contraseña y mostrará un mensaje diciendo “Felicitaciones,
recordás tu contraseña”. Si falla luego de 3 intentos se mostrará el mensaje “Tenes que
ejercitar la memoria”. Los mensajes quedarán en pantalla a la espera que el usuario
presione una tecla, luego de esto se cerrará el programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    char contrasenia[8];
    char *pass;
    pass = &contrasenia[0];

    char usuario[8];
    char *user;
    user = &usuario[0];

    int cont = 0;

    printf("Ingrese un contrasenia de 8 caracteres\n>");
    scanf("%s", pass);
    system("cls");

    do
    {
        printf("Repita su contrasenia:\n>");
        scanf("%s", user);
            int chek_palabra = 0;
        for (int j = 0; j < 8; j++)
        {
            if (pass[j] == user[j])
            {
                chek_palabra++;
            }
        }
        if (chek_palabra == 8)
        {
            printf("Felicidades! Que buena memoria!\n\n");
            cont = cont + 4;
            system("pause");
        }
        else
        {
            printf("No! Esa no era la contrasenia. Intente nuevamente:\n");
            cont++;
        }
        chek_palabra = 0;

    } while (cont < 3);
//Lo que hice es un do while con un contador de vueltas, si acierta todas las letras a la primer ael contador se pasa de la condicion del while y termina el programa sino suma uno y te da otra oportunidad 
    return 0;
}
