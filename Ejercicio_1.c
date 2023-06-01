#include <stdio.h>
#include <stdlib.h>

void main () {

    /*Realizar un algoritmo para dividir dos números naturales mediante restas sucesivas utilizando la estructura WHILE




Inicializa una variable llamada cociente en cero, que representa la respuesta de la división.

Resta el divisor del dividendo tantas veces como sea posible, siempre y cuando el dividendo sea mayor o igual al divisor.

Después de cada resta exitosa, incrementa el cociente en uno.

Continúa restando el divisor del dividendo hasta que ya no sea posible.

El valor final del cociente es el resultado de la división.


     */

    int dividendo, aux, divisor, resultado, cociente = 0;

    printf ("\nIntroduzca el valor del dividendo y del divisor: ");
    fflush(stdin);
    scanf("%d %d", &dividendo, &divisor);

    aux = dividendo;

    do {
        resultado = dividendo - divisor;
        cociente++;

        printf("\n\n%d - %d es igual a %d y su cociente es %d\n\n", dividendo, divisor, resultado, cociente);

        dividendo = resultado;


    } while (dividendo >= divisor);


    printf("\n\nEl cociente es %d . Por lo tanto %d dividido %d es igual a %d\n\n", cociente, aux, divisor, cociente);


    system ("pause");

}
