/*
 ============================================================================
 Name        : tpEmpleados2.c
 Author      : Francisco Camerano
 Version     :
 Copyright   : Your copyright notice
 Description : ABM
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "aEmpleados.h"
#include <string.h>

#define TOTALEMPLEADOS 1000


int main() {
	setbuf(stdout,NULL);

	eEmpleado aEmpleados[TOTALEMPLEADOS];

	inicializarEmpleados(aEmpleados, TOTALEMPLEADOS);

	int opcionMenu;
	int IdIngresado;
	do{
		printf("Elija una opcion: \n");
		printf("1- Alta de un empleado. \n");
		printf("2- Baja de un empleado. \n");
		printf("3- Modificar un empleado. \n");
		printf("4- Mostrar listado de empleados. \n");
		printf("5- Mostrar empleado por ID. \n");
		printf("6- Salir. \n");
		printf("Opcion: ");
		scanf("%d", &opcionMenu);

		switch(opcionMenu){
			case 1: //Alta
				AltaEmpleado(aEmpleados ,TOTALEMPLEADOS);
				system("pause");
				break;

			case 2: //Baja
				printf("Id del empleado que desea dar de baja: ");
				scanf("%d", &IdIngresado);
				eliminarUsuarioPorId(aEmpleados, IdIngresado);
				system("pause");
				break;

			case 3: //Modificacion
				printf("Id del empleado que desea modificar: ");
				scanf("%d", &IdIngresado);
				modificarDatos(aEmpleados, IdIngresado);
				system("pause");
				break;

			case 4: //Mostrar
				mostrarTodos(aEmpleados , TOTALEMPLEADOS);
				system("pause");
				break;

			case 5:
				printf("Ingrese ID: ");
				scanf("%d", &IdIngresado);
				mostrarDatos(aEmpleados, IdIngresado);
				system("pause");
				break;

			case 6:
				printf("saliendo..");
				return EXIT_SUCCESS;
				break;

			default:
				printf("Error...Reingrese la opcion: \n");
				system("pause");
				break;
		}
	}while(opcionMenu != 6);
}

