#include <stdio.h>

int main(){
    printf("Hola mundo");
    int a = 8;
    int *p;
    p = &a;
    printf("\nContenido del puntero : %d", *p);
    printf("\nValor al que apunta el puntero: %d",p);
    printf("\nDireccion de memoria de la varibale a: %d",&a);
    printf("\nDireccion de memoria del puntero: %d",&p);
    printf("\nTamaño de la variable a: %d", sizeof(a));
    return 0;
}
