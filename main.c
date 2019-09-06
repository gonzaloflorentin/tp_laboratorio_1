/******************************************************************************

* Programa: Trabajo Práctico número 1
*
* Objetivo:
    Hacer una calculadora. Ingresar dos datos y realizar la operacion deseada
        operadorA
        operadorB
*
* Version: 0.1 del 03 septiembre de 2019
* Autor: Gonzalo Florentín
*

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    float operadorA=0,operadorB=0;//Son el operando A y el operando B
    float resultadoSuma,resultadoResta,resultadoMultiplicar,resultadoDividir;//Variables utilizadas para guardar el resultado de las operaciones
    int resultadoFactorialA,resultadoFactorialB;//Variables utilizadas para guardar el resultado de las operaciones
    int opcion;//Variable utilizada para guardar la respuesta del usuario

    do
    {
    printf("Ingresar 1er operando: (A= %.2f) \n",operadorA);
    scanf("%f",&operadorA);
    system("cls");
    printf("A = %.2f\n",operadorA);
    printf("Ingresar 2do operando (A= %.2f) \n",operadorB);
    scanf("%f",&operadorB);
    system("cls");
    printf("A = %.2f\n",operadorA);
    printf("B = %.2f\n",operadorB);


    printf("--------Menu de opciones--------\n");
    printf("1)   Calcular la suma            (A+B)\n");
    printf("2)   Calcular la resta           (A-B)\n");
    printf("3)   Calcular la division        (A/B)\n");
    printf("4)   Calcular la multiplicacion  (A*B)\n");
    printf("5)   Calcular el factorial        (A!)\n");
    printf("6)   Salir\n");
    scanf("%d",&opcion);

    switch (opcion)
    {
        case 1: resultadoSuma=sumar(operadorA,operadorB);
                system("cls");
                printf("A: %.2f \t B: %.2f\n",operadorA,operadorB);
                printf("El resultado de A + B es: %.2f \n\n",resultadoSuma);
                break;
        case 2: resultadoResta=restar(operadorA,operadorB);
                system("cls");
                printf("A: %.2f \t B: %.2f\n",operadorA,operadorB);
                printf("El resultado de A - B es: %.2f \n\n",resultadoResta);
                break;
        case 3: resultadoDividir=dividir(operadorA,operadorB);
                if(resultadoDividir==-1)
                    {
                    system("cls");
                    printf("No es posible dividir por cero\n\n");
                    }else
                        {
                        system("cls");
                        printf("A: %.2f \t B: %.2f\n",operadorA,operadorB);
                        printf("El resultado de A / B es: %.2f \n\n",resultadoDividir);
                        }
                break;
        case 4: resultadoMultiplicar=multiplicar(operadorA,operadorB);
                system("cls");
                printf("A: %.2f \t B: %.2f\n",operadorA,operadorB);
                printf("El resultado de A * B es: %.2f \n\n",resultadoMultiplicar);
                break;
        case 5: resultadoFactorialA=factorial(operadorA);
                resultadoFactorialB=factorial(operadorB);
                system("cls");
                printf("El factorial de A es: %d \n",resultadoFactorialA);
                printf("El factorial de B es: %d \n",resultadoFactorialB);
                break;
    }
    printf("1) Continuar\n6) Salir\n");
    scanf("%d",&opcion);
    if(opcion!=6)
    {
        system("cls");
        operadorA=0;
        operadorB=0;
    }
    }while(opcion!=6);


    return 0;
}
