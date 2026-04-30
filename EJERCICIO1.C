#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b;
    int suma, resta, multiplicacion, residuo;
    float division;
    double potencia;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);


    // COMPARACION DE NUMEROS:
    if (a > b){
        printf("\n A es mayor que B");
    }
    else if(a < b){
        printf("\n A es menor que B");
    }
    else {
        printf("\nA y B son iguales");
    }


//OPERACIONES ARITMETICAS

    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    potencia =  pow(a,b);

//COMPARACION DE DIVISION Y RESIDUO SI B=0
    if (b != 0) {
        division = (float)a / b;
        residuo = a % b;
    } else {
        printf("\nNo se puede dividir entre 0");
        division = 0;
        residuo = 0;
    }

    printf("\n\n      OPERACIONES: \n");
    printf("\nSUMA: %d + %d = %d", a,b,suma);
    printf("\nRESTA: %d - %d = %d", a,b,resta);
    printf("\nMULTIPLIACION: %d x %d = %d", a,b,multiplicacion);
    printf("\nDIVISION: %d / %d = %.2f", a,b,division);
    printf("\nPOTENCIA: %d ^ %d = %.2lf",a,b,potencia);
    printf("\nRESIDUO: %d %% %d = %d",a,b,residuo);
    printf("\n");
    
    return 0;

}
