#include <stdio.h>
#ifndef AEMPLEADOS_H_
#define AEMPLEADOS_H_

typedef struct{
	int id;
	char nombre[51];
	char apellido[51];
	int salario;
	int sector;
	int isEmpty;
}eEmpleado;


/*
 * \brief Pide el ingreso de un array y su longitud para inicializarlo en 0.
 * \param array[] array que queremos inicializar.
 * \param int longitud del array.
 * \return int devuelve .
 */
int inicializarEmpleados(eEmpleado array[],int len);

/*
 * \brief Pide el ingreso de un array y su longitud para buscar las posiciones vacías.
 * \param array[] array en el que queremos buscar.
 * \param int longitud del array.
 * \return int devuelve si la posicion esta vacía.
 */
int buscarPosicionLibre(eEmpleado array[], int len);

/*
 * \brief Pide el ingreso de un array y su longitud para dar de alta cada empleado.
 * \param array[] array en el que queremos dar de alta los empleados.
 * \param int longitud del array.
 * \return int devuelve la posicion del array.
 */
int AltaEmpleado(eEmpleado array[], int len);

/*
 * \brief Pide el ingreso de un array y su posicion para mostrar los datos de ese empleado.
 * \param array[] array en el que queremos mostrar.
 * \param int posicion del array.
 * \return void no devuelve nada.
 */
void mostrarDatos(eEmpleado array[], int posicion);

/*
 * \brief Pide el ingreso de un array y su longitud para mostrar los datos de ese empleado.
 * \param array[] array en el que queremos mostrar.
 * \param int longitud del array.
 * \return void no devuelve nada.
 */
void mostrarTodos(eEmpleado array[], int len);

/*
 * \brief Pide el ingreso de un array y su posicion para modificar los datos.
 * \param array[] array del empleado a modificar.
 * \param int posicion del array.
 * \return void no devuelve nada.
 */
void modificarDatos(eEmpleado array[], int posicion);

/*
 * \brief Pide el ingreso de un array y su posicion para modificar los datos.
 * \param array[] array del empleado a eliminar.
 * \param int posicion del array.
 * \return void no devuelve nada.
 */
void eliminarUsuarioPorId(eEmpleado array[], int posicion);

#endif /* AEMPLEADOS_H_ */
