/*
 ============================================================================
 Name        : tp1.c
 Author      : Francisco Camerano
 Version     :
 Copyright   : Your copyright notice
 Description : Calculadora
 ============================================================================
 */

#include <stdlib.h>
#include "input.h"

int main(void) {
	setbuf(stdout,NULL);

	float valor1;
	float valor2;
	float suma;
	float resta;
	float multiplicacion;
	float division;
	int factorial1;
	int factorial2;

	printf("Primer n�mero: ");
	scanf("%f", &valor1);
	printf("Segundo n�mero: ");
	scanf("%f", &valor2);

	//Llamados
	suma = calcularSuma(valor1, valor2);
	printf("El resultado de la suma es: %.3f\n", suma);

	resta = calcularResta(valor1,valor2);
	printf("El resultado de la resta es: %.3f\n", resta);

	multiplicacion = calcularMultiplicacion(valor1,valor2);
	printf("El resultado de la multiplicacion es: %.3f\n", multiplicacion);

	division = calcularDivision(valor1,valor2);

	if(division==0){
		printf("La division por cero no esta permitida\n");
	}
	else{
		printf("El resultado de la division es: %.3f \n", division);
	}

	factorial1 = calcularFactorial(valor1);
	printf("El resultado del factorial del primer numero es: %d\n", factorial1);

	factorial2 = calcularFactorial(valor2);
	printf("El resultado del factorial del segundo numero es: %d\n", factorial2);

	return 0;
}
