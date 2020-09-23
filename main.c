#include <stdio.h>

int main(){
    char nombre [100];

    printf("Hola Mundo\n");
    printf("ingrese su nombre: ");
    fgets(nombre,sizeof(nombre), stdin);
    printf("hola %s",nombre);

    return 0;
}