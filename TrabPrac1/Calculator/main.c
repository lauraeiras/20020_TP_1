#include <stdio.h>
#include <stdlib.h>
#include "FuncionesCalculadora.h"

int main()
{
    float A;
    float B;
    int respuesta;
    char opcion;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    int factorialNumeroA;
    int factorialNumeroB;

    respuesta=0;


    do
    {
        //menu principal//porque mierdaaaa me muestra siempreel menu?
      printf ("1- Ingresar el primer numero \n");
      printf ("2- Ingresar el segundo numero \n");
      printf ("3- Calcular todas las operaciones \n");
      printf ("4- Mostrar resultados\n");
      printf ("5- Salir\n");

      // elegir opcion de menu
        printf("Elija una opcion: \n");
        fflush(stdin);
        scanf("%c", &opcion);

        while (opcion!='1' && opcion!='2' && opcion!='3' && opcion!='4' && opcion!='5')
            {
                printf("Opcion incorrecta \n");
                printf("Elija una opcion: 1,2,3,4,5 ");
                fflush(stdin);
                scanf("%c", &opcion);
            }

      switch(opcion)
      {
      case '1':
           printf("\nEl primer numero es: ");
           scanf("%f",&A);
        break;
      case '2':
           printf("El segundo numero es: ");
           scanf("%f",&B);
        break;
      case '3':
          resultadoSuma=sumar(A,B);
          resultadoResta=restar(A,B);
          resultadoMultiplicacion=multiplicar(A,B);
          resultadoDivision=dividir(A,B);
          factorialNumeroA=CalcularFactorial(A);
          factorialNumeroB=CalcularFactorial(B);

        break;
      case '4':
                printf ("El resultado de A+B es: %f\n",resultadoSuma);
                printf ("El resultado de A-B es:  %f\n",resultadoResta);
                printf ("El resultado de la multiplicacion A*B es: %f\n",resultadoMultiplicacion);
                printf  ("El resultado de la division A/B es : %f\n",resultadoDivision);
                printf ("Calculo Factorial de A es: %d\n",factorialNumeroA);
                printf ("Calculo Factorial de B es: %d\n",factorialNumeroA);
        break;
      case '5':
          printf("Gracias por utilizar esta calculadora \n");

      default:
           printf("Opcion invalida \n");
        break;
      }

    }while(respuesta!=5);

    return 0;
}


/*
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)*/
