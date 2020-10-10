/*
 * aEmpleados.c
 *
 *  Created on: 3 oct. 2020
 *  Author: Francisco Camerano
 */

#include <stdio.h>
#include <stdlib.h>
#include "aEmpleados.h"
#include <string.h>

int inicializarEmpleados(eEmpleado array[], int len){

	if(array != NULL && len > 0){
		for(int i = 0; i < len; i++){
			array[i].isEmpty = 0;
		}
		return 0;
	}
	return -1;
}

int buscarPosicionLibre(eEmpleado array[], int len){
	int posicionLibre;
	if(array != NULL && len > 0){
		for(int i = 0; i < len; i++)
		{
			if(array[i].isEmpty == 0){
				posicionLibre = i;
				return posicionLibre;
			}
		}
	}
	return -1;
}


int AltaEmpleado(eEmpleado array[], int len){
	int posicion = buscarPosicionLibre(array, len);
	int salario;
	int sector;
	if(posicion == -1) {
		return -1;
	}
	else{
		fflush(stdin);
		printf("Ingrese el nombre del trabajador: ");
		gets(array[posicion].nombre);
		fflush(stdin);
		printf("\nIngrese el apellido deltrabajador: ");
		gets(array[posicion].apellido);
		fflush(stdin);
		printf("\nIngrese el salario del trabajador: ");
		scanf("%d", &salario);
		array[posicion].salario = salario;
		fflush(stdin);
		printf("\nIngrese el sector del trabajador: ");
		scanf("%d", &sector);
		array[posicion].sector = sector;
		array[posicion].id = posicion;
		array[posicion].isEmpty = 1;
		printf("Se agrego el empleado en la posicion: %i", posicion);
		printf("\n\n");
		mostrarDatos(array, posicion);
		return posicion;
	}
}

void modificarDatos(eEmpleado array[], int posicion){
	int salario;
	int sector;
	if(array[posicion].isEmpty == 0){
			printf("\nNo hay datos para esa ID\n");
	}else {
		fflush(stdin);
		printf("\n.: INGRESE LOS DATOS NUEVAMENTE :.\n");
		printf("\nIngrese el nombre del trabajador: ");
		gets(array[posicion].nombre);
		fflush(stdin);
		printf("\nIngrese el apellido deltrabajador: ");
		gets(array[posicion].apellido);
		fflush(stdin);
		printf("\nIngrese el salario del trabajador: ");
		scanf("%d", &salario);
		array[posicion].salario = salario;
		fflush(stdin);
		printf("\nIngrese el sector del trabajador: ");
		scanf("%d", &sector);
		array[posicion].sector = sector;
	}
}

void mostrarTodos(eEmpleado array[], int len){
	int i = 0;
	while(array[i].isEmpty != 0 && i < len){
		mostrarDatos(array, i);
		i++;
	}
}

void mostrarDatos(eEmpleado array[], int posicion){
	if(array[posicion].isEmpty == 0){
		printf("\nNo hay datos para esa ID\n");
	}else {
		printf("Nombre: %s\n", array[posicion].nombre);
		printf("Apellido: %s\n", array[posicion].apellido);
		printf("Salario: %d\n", array[posicion].salario);
		printf("Sector: %d\n", array[posicion].sector);
		printf("Id: %d\n\n", array[posicion].id);
		printf("--------------------------------\n");
	}
}

void eliminarUsuarioPorId(eEmpleado array[], int posicion){
	if(array[posicion].isEmpty == 0){
		printf("\nNo hay datos para esa ID\n");
	}else {
		array[posicion].isEmpty = 0;
		printf("\nSe elimino el usuario...\n");
	}
}
