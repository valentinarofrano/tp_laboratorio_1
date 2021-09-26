

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "funciones.h"


float calcularSuma(float numUno, float numDos);
float calcularResta(float numUno, float numDos);
float calcularDivision(float numUno, float numDos);
float calcularMultiplicacion(float numUno, float numDos);
unsigned long long int calcularFactorial(int numero);
int esNumeroEntero(float numero);
int esNumeroPositivo(float numero);
int verificarFactorial(float numero);
void mostrarResultados(float resultadoSuma, float resultadoResta, float resultadoDivision, float resultadoMultiplicacion, unsigned long long int resultadoFactorial, unsigned long long int resultadoFactorialDos,float numeroUno, float numeroDos);
int validarDivision(float numDos);
void mostrarMensaje(char* mensaje);
int pedirOpcion(char* mensaje, char* mensajeError, int minimo, int maximo);
float pedirNumero(float numero);



#endif /* CALCULADORAFUNCIONES_H_ */
