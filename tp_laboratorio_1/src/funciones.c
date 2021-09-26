

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "funciones.h"



int pedirOpcion(char* mensaje, char* mensajeError, int minimo, int maximo)
{
	int opcion;

	printf("%s", mensaje);
	fflush(stdin);
	scanf("%d", &opcion);

	while(isalpha(opcion)!= 0 || opcion<minimo || opcion>maximo)
	{
		printf("%s", mensajeError);
		fflush(stdin);
		scanf("%d", &opcion);
	}
	return opcion;
}
/// @fn int verificarFactorial(float)
/// @brief Verifica si un numero es positivo, entero, mayor a 1 y menor a 13 para poder mostrar el resultado del factorial.
///
/// @param numero
/// @return Retorna 1 en caso de que la condicion se cumpla y se pueda mostrar el factorial, retorna 0 en caso de que no.
int verificarFactorial(float numero)
{

	int retorno;

	retorno = 0;
	if(esNumeroPositivo(numero)== 1 && esNumeroEntero(numero) == 1 && numero>0 && numero<21)
	{
		retorno = 1;
	}

	return retorno;
}

/// @fn int validarDivision(float)
/// @brief Se encarga de validar la division por 0
///
/// @param numDos
/// @return Si el numero por el que se divide es distinto de 0, retorna 0, sino retorna 1
int validarDivision(float numDos)
{
	int retorno;

	retorno = 1;

	if(numDos!=0)
	{
		retorno = 0;
	}

	return retorno;
}

/// @fn void mostrarMensaje(char*)
/// @brief Muestra un mensaje en el main.
///
/// @param mensaje
void mostrarMensaje(char* mensaje)
{
	printf("%s", mensaje);
	fflush(stdin);
}

/// @fn int esNumeroPositivo(float)
/// @brief Verifica si el numero es positivo.
///
/// @param numero
/// @return Retorna 1 si es  positivo y retorna 0 en caso de que no.
int esPositivo(float numero)
{
	int retorno;

	retorno = 0;
	if(numero > 0)
	{
		retorno = 1;
	}

	return retorno;
}

/// @fn int esNumeroEntero(float)
/// @brief Verifica si el numero es entero.
///
/// @param numero
/// @return Retorna 1 en caso de que sea entero y retorna 0 en caso de que no.
int esEntero(float numero)
{
	int retorno;

	retorno = 0;
	if((int)numero - numero == 0)
	{
		retorno = 1;
	}

	return retorno;
}

/// @fn float pedirNumero(float)
/// @brief Carga el numero
///
/// @param numero
///
/// @return Retorna el numero que ingresó
float pedirNumero(float numero)
{

		printf("\nIngrese un numero :\n");
		fflush(stdin);
		scanf("%f", &numero);

		if(isalpha(numero)!= 0)
		{
			printf("\nError. Reingrese numero: \n");
			fflush(stdin);
			scanf("%f", &numero);
		}


	return numero;

}
