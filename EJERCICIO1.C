#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);


    // COMPARACION DE NUMEROS:
    if (a>b){
        printf("\n A es mayor que B");
    }
    else if(a<b){
        printf("\n A es mayor que B");
    }
    else {
        printf("\nA y B son iguales")
    }

}
