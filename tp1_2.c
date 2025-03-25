#include <stdio.h>
int cuadrado(int a);
void cuadradoDeUnNumero(int a);
void mostrarInfo(int *a);
int main(){
    int a = 8;
    cuadradoDeUnNumero(a);
    mostrarInfo(&a);
    printf("\nLa direccion de la variable es : %d",&a);
    return 0;
}
int cuadrado(int a){
    int x;
    x = a * a;
    return x;
}
void cuadradoDeUnNumero(int a){
    int x;
    x = a * a;
    printf("El cuadrado de a es : %d",x);
}
void mostrarInfo(int *a){
    printf("\nLa direccion de la variable es : %d",a);
    printf("\nEl contenido de la variable es : %d",*a);
}