#include <stdio.h>

int main(){
    char nombre [100];
    unsigned int edad;

    printf("Hola Mundo\n");
    printf("ingrese su nombre: ");
    fgets(nombre,sizeof(nombre), stdin);
    printf("hola %s",nombre);
    printf("edad");
    scanf("%u", &edad);
    printf("vas a cumplir %u",edad + 1);


    return 0;
}