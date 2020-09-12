

#include "FuncionesCalculadora.h"


//Desarrollo funciones


//Calculos
float sumar(float X,float Y)
{
    float resultado;
    resultado=X+Y;
    return resultado;
}

float restar(float X,float Y)
{
    float resultado;
    resultado=X-Y;
    return resultado;
}

float multiplicar(float X,float Y)
{
    float resultado;
    resultado=X*Y;
    return resultado;
}

float dividir(float X,float Y)
{
    float resultado;

    if(Y!=0)
    {
       resultado=X/Y;
    }


    return resultado;
}

int CalcularFactorial(float numero)//
{
     int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado =(int) numero * CalcularFactorial(numero - 1);
    }
    return resultado;
}
