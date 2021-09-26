//============================================================================
/* Rofrano valentina, division D.
 *  1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:

1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)

3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)

4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”

5. Salir*/

//============================================================================


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "funciones.h"


int main(void)
{
	setbuf(stdout, NULL);

	float numUno;
	float numDos;
	float numIngresadoUno;
	float numIngresadoDos;
	int opcion;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	unsigned long long int resultadoFactorial;
	unsigned long long int resultadoFactorialDos;
	char seguir;


	numUno = 0;
	numDos = 0;
	numIngresadoUno = 0;
	numIngresadoDos = 0;

	seguir = 's';


	do{

		opcion = pedirOpcion("\nIngrese alguna de las siguientes opciones:\n"
				"1.Ingresar 1er operando:\n"
				"2.Ingresar 2do operando:\n"
				"3.Calcular todas las operaciones\n"
				"4.Informar resultados\n"
				"5.Salir\n",
				"\nError. Reingrese opcion:\n"
				"\n1.Ingresar 1er operando:\n"
				"2.Ingresar 2do operando:\n"
				"3.Calcular todas las operaciones\n"
				"4.Informar resultados\n"
				"5.Salir\n", 1, 5);


		switch(opcion)
		{
			case 1:
				numIngresadoUno = pedirNumero(numUno);

				printf("\nA = %.1f\n", numIngresadoUno);
			break;
			case 2:
				numIngresadoDos =pedirNumero(numDos);
				printf("\nB = %.1f\n", numIngresadoDos);
			break;
			case 3:
				resultadoSuma = calcularSuma(numIngresadoUno, numIngresadoDos);
				resultadoResta = calcularResta(numIngresadoUno, numIngresadoDos);
				resultadoDivision = calcularDivision(numIngresadoUno, numIngresadoDos);
				resultadoMultiplicacion = calcularMultiplicacion(numIngresadoUno, numIngresadoDos);
				if(verificarFactorial(numIngresadoUno) == 1)
				{
					resultadoFactorial = calcularFactorial(numIngresadoUno);
				}
				if(verificarFactorial(numIngresadoDos) == 1)
				{
					resultadoFactorialDos = calcularFactorial(numIngresadoDos);
				}
			break;
			case 4:

				mostrarResultados(resultadoSuma, resultadoResta, resultadoDivision, resultadoMultiplicacion, resultadoFactorial, resultadoFactorialDos, numIngresadoUno,numIngresadoDos);

			break;
			case 5:
				mostrarMensaje("\nUsted ha seleccionado la opcion SALIR!");
				mostrarMensaje("\nDesea seguir ingresando numeros? s/n:\n");
				fflush(stdin);
				scanf("%c", &seguir);

				if(seguir == 'n')
				{
					mostrarMensaje("\n ha decidido NO ingresar mas numeros.\n gracias!");
				}
			break;
		}
	}while(opcion!=5 || seguir!='n');


	return EXIT_SUCCESS;
}









