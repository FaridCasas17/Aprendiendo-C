#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, i;
    int suma, resta, multiplicacion, residuo;
    float division;
    double potencia;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);


    // COMPARACION DE NUMEROS:

    // A mayor que B
    if (a > b){
        printf("\n %d es mayor que %d",a,b);
        //IMPRESION DE LOS NUMEROS DE A HASTA B
        printf("\n Numeros desde %d hasta %d :\n",a,b);   

        //Decremento A hasta B
        for (i = a; i >= b; i--){
        printf("%d ", i);
        }
    
    }
    else if(a < b){
        printf("\n %d es menor que %d",a,b);
        printf("\n Numeros desde %d hasta %d :\n",a,b);   

        //Incremento de A hasta B
        for(i=a; i<=b; i++){
            printf("%d ",i);
        }
    }
    else {
        printf("\n%d y %d son iguales",a,b);
    }


//OPERACIONES ARITMETICAS

    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    potencia =  pow(a,b);


    printf("\n\n      OPERACIONES: \n");
    printf("\nSUMA: %d + %d = %d", a,b,suma);
    printf("\nRESTA: %d - %d = %d", a,b,resta);
    printf("\nMULTIPLIACION: %d x %d = %d", a,b,multiplicacion);
    printf("\nDIVISION: %d / %d = %.2f", a,b,division);
   
    //COMPARACION DE DIVISION Y RESIDUO SI B=0
    if (b != 0) {
        division = (float)a / b;
        residuo = a % b;
    } else {
        printf("    No se puede dividir entre 0");
        division = 0;
        residuo = 0;
    }
    printf("\nPOTENCIA: %d ^ %d = %.2lf",a,b,potencia);
    printf("\nRESIDUO: %d %% %d = %d",a,b,residuo);
    printf("\n");
    
    return 0;

}
