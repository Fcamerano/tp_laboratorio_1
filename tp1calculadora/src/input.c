#include "input.h"

//Desarrollo de las funciones
float calcularSuma(float num1, float num2)
{
    float resultado;
    resultado=num1+num2;
    return resultado;
}

float calcularResta(float num1, float num2)
{
    float resultado;
    resultado=num1-num2;
    return resultado;
}

float calcularMultiplicacion(float num1, float num2)
{
    float resultado;
    resultado=num1*num2;
    return resultado;
}

float calcularDivision(float num1, float num2)
{
    float resultado;

    if(num2==0){
    	return 0;
    }
    else{
    	resultado = num1/num2;
    	return resultado;
    }
}

int calcularFactorial(int num) //Funcion recursiva
{
    int factorial = 1;

    if(num>1){
    	factorial = num * calcularFactorial(num-1);
    }
    else{
    	factorial = 1;
    }

    return factorial;
}


