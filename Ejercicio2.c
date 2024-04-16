#include <stdio.h>

int main() {
    int numero, antecesor, cuadrado_antecesor;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    antecesor = numero - 1;

    cuadrado_antecesor = antecesor * antecesor;

    printf("El cuadrado del antecesor de %d es: %d\n", numero, cuadrado_antecesor);

    return 0;
}