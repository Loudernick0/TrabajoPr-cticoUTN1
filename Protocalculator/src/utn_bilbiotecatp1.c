/*
 * utn_bilbiotecatp1.c
 *
 *  Created on: 8 abr. 2021
 *      Author: Julio
 */


#include <stdio.h>
#include <stdlib.h>

/* \brief: Solicita ingreso de numeros (de tipo float) al usuario
 * \param: operando: variable auxiliar de la funcion para el ingreso del dato numerico
 * \return: operando: devuelve el numero ingresado
 */

float getNumero(void)
{
	float operando;

	printf("Ingrese un numero!: ");
	fflush(stdin);
	scanf("%f",&operando);

	return operando;
}

/* \brief: Suma 2 numeros de tipo float
 * param : operandoA: 1er numero ingresado por el usuario
 * param : operandoB: 2do numero ingresado por el usuario
 * param : *pResultado: puntero a variable resultado del main
 * return: 0 en caso de exito, -1 en caso de error
 */
int suma(float operandoA, float operandoB, float* pResultado)
{
	int retorno = -1;

	if(pResultado != NULL)
	{

		*pResultado = operandoA+operandoB;

		retorno = 0;

	}

	return retorno;
}

/* \brief: Resta 2 numeros de tipo float
 * param : operandoA: 1er numero ingresado por el usuario
 * param : operandoB: 2do numero ingresado por el usuario
 * param : *pResultado: puntero a variable resultado del main
 * return: 0 en caso de exito, -1 en caso de error
 */
int resta(float operandoA, float operandoB, float* pResultado)
{
	int retorno = -1;

	if(pResultado != NULL)
	{
		*pResultado = operandoA-operandoB;

		retorno = 0;
	}

	return retorno;
}

/* \brief: Multiplica 2 numeros de tipo float
 * param : operandoA: 1er numero ingresado por el usuario
 * param : operandoB: 2do numero ingresado por el usuario
 * param : *pResultado: puntero a variable resultado del main
 * return: 0 en caso de exito, -1 en caso de error
 */
int multiplicacion(float operandoA, float operandoB, float* pResultado)
{
	int retorno = -1;

	if(pResultado != NULL)
	{
		*pResultado = operandoA*operandoB;

		retorno = 0;
	}
	return retorno;
}

/* \brief: divide 2 numeros de tipo float
 * param : operandoA: 1er numero ingresado por el usuario
 * param : operandoB: 2do numero ingresado por el usuario
 * param : *pResultado: puntero a variable resultado del main
 * return: 0 en caso de exito, -1 en caso de error, en caso de que el segundo operando sea
 * cero, retorna -2 como error particular y la leyenda incluida en el printf.
 */
int division(float operandoA, float operandoB, float* pResultado)
{
	int retorno = -1;

	if(pResultado != NULL)
	{
		if(operandoB == 0)
		{
			printf("ERROR, No se puede dividir por cero!!");

			retorno = -2;
		}
		else
		{
			*pResultado = operandoA/operandoB,
			retorno = 0;
		}
	}

	return retorno;
}
/* \brief: Realiza el factorial 2 numeros de tipo float y los devuelve por separado
 * por medio de punteros
 * param : operandoA: 1er numero ingresado por el usuario
 * param : operandoB: 2do numero ingresado por el usuario
 * param : *pResultado: puntero a variable resultado del main
 * param: *pResultadoB: puntero a variable resultadofactorialb del main.
 * return: 0 en caso de exito, -1 en caso de error
 */
int factorial(float operandoA, float operandoB, float* pResultado, float* pResultadoB)
{
	int retorno = -1;
	float factorialA = 1;
	float factorialB = 1;

	if(pResultado != NULL && pResultadoB != NULL)
	{
		if(operandoA <0)
		{
			*pResultado = 0;

		}
		if(operandoB <0)
		{
			*pResultadoB = 0;
		}
		else
		{
			if(operandoA == 0)
			{
				*pResultado = 1;
			}
			if(operandoB == 0)
			{
				*pResultadoB = 1;
			}
			else
			{
				for(int i= 1; i<=operandoA; i++)
				{
					factorialA = factorialA*i;
				}
				for(int j=1; j<=operandoB; j++)
				{
					factorialB = factorialB*j;
				}
				*pResultado = factorialA;
				*pResultadoB = factorialB;
				retorno = 0;
			}

		}


	}
	return retorno;
}
