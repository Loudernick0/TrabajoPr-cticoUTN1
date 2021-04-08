/*
 ============================================================================
 Name        : Protocalculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_bibliotecatp1.h"

int main(void)
{
	setbuf(stdout,NULL);

	float numeroIngresadoA;
	float numeroIngresadoB;
	int respuestafuncion;
	char tipoOperacionaCalcular;
	float resultado;
	float resultadofactorialB;
	char continuar;

	printf("BIENVENIDO A ProtoCalculator!!!");

	do
	{

		numeroIngresadoA = getNumero();
		numeroIngresadoB = getNumero();

		printf("\nQue operacion desea realizar?? (s)uma,(r)esta,(m)ultiplicación,(d)ivision o (f)actorial?\n");
		fflush(stdin);
		scanf("%c",&tipoOperacionaCalcular);

		switch(tipoOperacionaCalcular)
		{
		   case 's':
			   respuestafuncion = suma(numeroIngresadoA, numeroIngresadoB, &resultado);
			   if(respuestafuncion == 0)
			   {
				   printf("la suma es: %f",resultado);
			   }
			   else
			   {
				   printf("Syntax ERROR");
			   }
			   break;
		   case 'r':
			   respuestafuncion = resta(numeroIngresadoA, numeroIngresadoB, &resultado);
			   if(respuestafuncion == 0)
			   {
				   printf("la resta es: %f",resultado);
			   }
			   else
			   {
				   printf("Syntax ERROR");
			   }
			   break;
		   case 'm':
			   respuestafuncion = multiplicacion(numeroIngresadoA, numeroIngresadoB, &resultado);
			   if(respuestafuncion == 0)
			   {
				   printf("la multiplicacion es: %f", resultado);
			   }
			   else
			   {
				   printf("Syntax ERROR");

			   }
			   break;
		   case 'd':
			   respuestafuncion = division(numeroIngresadoA, numeroIngresadoB, &resultado);
			   if(respuestafuncion == 0)
			   {
				   printf("la division es: %f", resultado);
			   }
			   else
			   {
				   printf("\nSyntax ERROR");
			   }
			   break;
		   case 'f':
			   respuestafuncion = factorial(numeroIngresadoA, numeroIngresadoB, &resultado, &resultadofactorialB);
			   if(respuestafuncion == 0)
			   {
				   printf("el factorial de %f es: %f y el factorial de %f es: %f",numeroIngresadoA, resultado, numeroIngresadoB, resultadofactorialB);
			   }
			   else
			   {
				   printf("\n Syntax ERROR");
			   }
		}

		printf("desea continuar realizar otra operación? - (s)i/(n)o");
		fflush(stdin);
		scanf("%c",&continuar);

	}while(continuar == 's');

	printf("\ngracias por usar ProtoCalculator");

	return EXIT_SUCCESS;
}
