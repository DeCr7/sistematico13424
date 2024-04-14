#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nombrePersona[30];
    printf("Dime tu nombre: ");
    scanf("%s", nombrePersona);
    printf("Hola %s", nombrePersona);
    return 0;
}