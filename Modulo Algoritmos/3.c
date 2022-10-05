/*3. Por teclado se ingresa el valor hora de un empleado. Posteriormente se ingresa el
nombre del empleado, la antigüedad y la cantidad de horas trabajadas en el mes. Se
pide calcular el importe a cobrar teniendo en cuenta que al total que resulta de
multiplicar el valor hora por la cantidad de horas trabajadas. Además, si el empleado
tiene más de 10 años de antigüedad hay que sumarle la cantidad de años trabajados
multiplicados por $30. Imprimir en pantalla el nombre, la antigüedad y el total a cobrar.*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct empleado
{
    int valor_hora;
    char nombre[20];
    int antiguedad;
    int horas_trabajadas;
} obrero;

int main()
{
    obrero juan;

    printf("Ingrese el nombre del trabajador:\n>");
    scanf("%s", &juan.nombre);

    printf("Ingrese el valor de la hora de trabajo:\n>");
    scanf("%d", &juan.valor_hora);
    printf("Antiguedad que tiene el empleado:\n>");
    scanf("%d", &juan.antiguedad);
    printf("Cantidad de  horas trabajadas este mes:\n>");
    scanf("%d", &juan.horas_trabajadas);
    // Cuentas:
    int salario = juan.horas_trabajadas * juan.valor_hora;
    int antiguedad = juan.antiguedad * 30;

    if (juan.antiguedad > 9)
    {
        printf("El trabajador %s debe cobrar %d por las horas trabajadas + %d pesos por los %d anios de antiguedad. \nEn total debe percibir %d pesos", juan.nombre, salario, antiguedad, juan.antiguedad, antiguedad + salario);
    }
    else
    {
        printf("El trabajador %s debe cobrar %d por las horas trabajadas", juan.nombre, salario);
    }

    return 0;
}
