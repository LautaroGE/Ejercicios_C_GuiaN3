#include <stdio.h>
#include <stdlib.h>

void main () {

    /**Realizar un programa en C, utilizando estructuras de repetición condicional para resolver cada o de los siguientes problemas:
     Nota: N y K son números naturales, ambas son variables de entrada.
     • Mostrar por pantalla los 10 primeros números naturales. X
     • Mostrar por pantalla los N primeros números pares.
     • Calcular y mostrar por pantalla la suma de los N primeros múltiplos de K.
     • Mostrar por pantalla los números enteros que se encuentran comprendidos en el intervalo [–K … K] en orden ascendente
       y luego en orden descendente.
     • Mostrar por pantalla los términos de la sucesión 1,3,6,10,15,21,28….. que sean menores al número K.
     • Calcular el promedio de N números. */


     int N, K;


    for (int i = 1; i<11; i++) {

        printf ("%d, ", i);

     }


     printf ("\n\nIngrese N: ");
     fflush(stdin);
     scanf("%d", &N);

     int contador;

     for (int j = 0; contador < N; j++) {

        if (j % 2 == 0) {

            printf ("%d es par, ", j);
            contador++;

        }

     }


    return 0;
}
