#include <stdio.h>
#include <stdlib.h>
#include "FuncionesCalculadora.h"

int main()
{
    float A;
    float B;
    int opcion;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    int factorialNumeroA;
    int factorialNumeroB;
    int tieneValorA;
    int tieneValorB;
    int calculosFinalizados;

    //0==false / 1==true
    tieneValorA=0;
    tieneValorB=0;
    calculosFinalizados=0;

    opcion=0;


    do
    {
        //menu principal
      printf ("1- Ingresar el primer numero \n");
      printf ("2- Ingresar el segundo numero \n");
      printf ("3- Calcular todas las operaciones \n");
      printf ("4- Mostrar resultados\n");
      printf ("5- Salir\n");


      // elegir opcion de menu
        printf("Elija una opcion: \n");
        scanf("%d", &opcion);

      switch(opcion)
      {
      case 1:
           printf("\nEl primer numero es: ");
           scanf("%f",&A);
           tieneValorA=1;
           calculosFinalizados=0;
        break;
      case 2:
           printf("El segundo numero es: ");
           scanf("%f",&B);
           tieneValorB=1;
           calculosFinalizados=0;
        break;
      case 3:
          if(tieneValorA == 0 || tieneValorB==0)
          {
              printf("no se puede calcular Ingrese datos \n ");
          }
          else
          {
              resultadoSuma=sumar(A,B);
              resultadoResta=restar(A,B);
              resultadoMultiplicacion=multiplicar(A,B);
              resultadoDivision=dividir(A,B);
              factorialNumeroA=CalcularFactorial(A);
              factorialNumeroB=CalcularFactorial(B);
              printf("Etoy calculando \n");

              calculosFinalizados=1;
          }

        break;

      case 4:

          if(calculosFinalizados==1)
            {
                printf ("El resultado de %f + %f es: %f\n",A,B,resultadoSuma);
                printf ("El resultado de %f - %f es:  %f\n",A,B,resultadoResta);
                printf ("El resultado de la multiplicacion A*B es: %f\n",resultadoMultiplicacion);
                if(B!=0)
                {
                   printf ("El resultado de la division A/B es : %f\n",resultadoDivision);

                }
                else
                    {
                        printf("No se puede dividir por Cero \n");
                    }

                printf ("Calculo Factorial de A es: %d\n",factorialNumeroA);
                printf ("Calculo Factorial de B es: %d\n",factorialNumeroB);

          }
          else
          {
              printf("Por favor calcular primero \n\n");
          }

        break;
      case 5:
           printf("Gracias por utilizar esta calculadora \n");
           break;

      default:
           printf("Opcion incorrecta \n");
           printf("Elija una opcion correcta : 1,2,3,4,5 ");
        break;
      }

    }while(opcion!=5);//fin while

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
