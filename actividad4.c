#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float num1, num2, cubo1, cubo2;
    printf("Dime el primer numero, sera elevado a cuarta potencia: ");
    scanf("%f", &num1);
    printf("Dime el segundo numero, sera elevado al cuadrado: ");
    scanf("%f", &num2);
    cubo1=pow(num1, 4);
    cubo2=pow(num2, 2);
    printf("%.1f elevado a 4 es %.1f\n", num1, cubo1);
    printf("%.1f elevado al cuadrado es %.1f", num2, cubo2);
    return 0;
}
