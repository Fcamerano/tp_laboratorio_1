#include <stdio.h>
#ifndef INPUT_H_
#define INPUT_H_

//Prototipos

/** \brief Pide el ingreso de dos numeros y los suma.
 * \param float Primer número.
 * \param float Segundo número.
 * \return float devuelve el resultado de la suma.
 */
float calcularSuma(float,float);
/** \brief Pide el ingreso de dos numeros y los resta.
 * \param float Primer número.
 * \param float Segundo número.
 * \return float devuelve el resultado de la resta.
 */
float calcularResta(float,float);
/** \brief Pide el ingreso de dos numeros y los multiplica.
 * \param float Primer número.
 * \param float Segundo número.
 * \return float devuelve el resultado de la multiplicación.
 */
float calcularMultiplicacion(float,float);
/** \brief Pide el ingreso de dos numeros y los divide.
 * \param float Primer número.
 * \param float Segundo número.
 * \return float devuelve el resultado de la división.
 */
float calcularDivision(float,float);
/** \brief Pide el ingreso de un numero y calcula su factorial.
 * \param float Primer número.
 * \param float Segundo número.
 * \return int Devuelve el resultado del factorial.
 */
int calcularFactorial(int);

#endif /* INPUT_H_ */
