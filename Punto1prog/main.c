#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 /*1. Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int)
  Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia y que acumule estos a los que ya
   tiene el país. La función no devuelve nada. *
 */
 typedef struct
 {
     int id;
     char nombre[20];
     int infectados;
     int recuperados;
     int muertos;
 }ePais;

 void actualizarRecuperados(ePais recuperados[], int acumuladorRecu);

int main()
{
    int acumuladorRecu = 0;
    int resultado;
    ePais recu;

    printf("Ingrese la cantidad de recuperados del dia de hoy: ");
    scanf("%d", &recu.recuperados);

    acumuladorRecu = recu.recuperados + acumuladorRecu;
    resultado = acumuladorRecu;

    printf("Cantidad de recuperados total: ");
    scanf("%d", &resultado);

    return 0;
}
