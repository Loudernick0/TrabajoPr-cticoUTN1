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
	int respuestaFuncion;
	int tipoOperacionaCalcular;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;
	float resultadoFactorial;
	float resultadofactorialB;
	char continuar;
	int respuestaSuma;
	int respuestaResta;
	int respuestaMultiplicacion;
	int respuestaDivision;
	int respuestaFactorial;

	printf("BIENVENIDO A ProtoCalculator!!!");

	do
	{

		printf("\nQue operacion desea realizar??\n"
				"1.Ingresar primer operando\n"
				"2.Ingresar segundo operando\n"
				"3. Calcular operaciones\n"
				"4. Informar resultados\n"
				"5. Salir");
		fflush(stdin);
		scanf("%d",&tipoOperacionaCalcular);

		switch(tipoOperacionaCalcular)
		{
		   case 1:
			   respuestaFuncion = utn_getNumero(&numeroIngresadoA);
			   if(respuestaFuncion != 0)
			   {
				   printf("Syntax ERROR");
			   }
			   break;
		   case 2:
			   respuestaFuncion = utn_getNumero(&numeroIngresadoB);
			   if(respuestaFuncion != 0)
			   {
				   printf("Syntax ERROR");
			   }
			   break;
		   case 3:
			   respuestaSuma = utn_suma(numeroIngresadoA, numeroIngresadoB, &resultadoSuma);
			   respuestaResta = utn_resta(numeroIngresadoA, numeroIngresadoB, &resultadoResta);
			   respuestaMultiplicacion = utn_multiplicacion(numeroIngresadoA, numeroIngresadoB, &resultadoMultiplicacion);
			   respuestaDivision = utn_division(numeroIngresadoA, numeroIngresadoB, &resultadoDivision);
			   respuestaFactorial = utn_factorial(numeroIngresadoA, numeroIngresadoB, &resultadoFactorial, &resultadofactorialB);
			   break;
		   case 4:
			   if(respuestaSuma == 0)
			   {
				   printf("\nla Suma es: %f", resultadoSuma);
			   }
			   else
			   {
				   printf("\nSyntax ERROR");
			   }
			   if(respuestaResta==0)
			   {
				   printf("\nla Resta es: %f",resultadoResta);
			   }
			   else
			   {
				   printf("\nSyntax ERROR");

			   }
			   if(respuestaMultiplicacion == 0)
			   {
				   printf("\n la Multiplicacion es: %f",resultadoMultiplicacion);
			   }
			   else
			   {
				   printf("Syntax ERROR!");
			   }
			   if(respuestaDivision == 0)
			   {
				   printf("\n la Division es: %f",resultadoDivision);
			   }
			   else
			   {
				   if(respuestaDivision == -2)
				   {
					   printf("\nERROR, No se puede dividir por cero!!");
				   }
				   else
				   {
					   printf("Syntax ERROR!");
				   }
			   }
			   if(respuestaFactorial == 0)
			   {
				   printf("\nel factorial de %f es: %f y el factorial de %f es: %f",numeroIngresadoA, resultadoFactorial, numeroIngresadoB, resultadofactorialB);
			   }
			   else printf("Syntax ERROR");
			   break;
		   case 5:
			  break;
		}

		if(tipoOperacionaCalcular==5)
		{
			break;
		}
		printf("desea realizar otra operación? - (s)i/(n)o");
		fflush(stdin);
		scanf("%c",&continuar);

	}while(continuar == 's');

	printf("\ngracias por usar ProtoCalculator");

	return EXIT_SUCCESS;
}
