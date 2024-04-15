/**/
#include <stdio.h>

int main() {
    int numero, cubo;

    // Solicitar al usuario que ingrese el número
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // Calcular el cubo
    cubo = numero * numero * numero;

    // Mostrar el resultado
    printf("El cubo de %d es: %d\n", numero, cubo);

    return 0;
}

