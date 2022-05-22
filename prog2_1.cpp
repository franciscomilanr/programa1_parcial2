/* 
Autor: Franciscomilan
Realizado: 17/03/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 1 del parcial 2 en C que almacena las edades de un salon de clases de 10 alumnos,
para la materia programacion estructurada. 
*/

//Libreria	
#include<stdio.h>
//Principal
int main() {
	//Limitar tamaño
	int edades[10];  	
	//Ingreso de datos al arreglo
	for (int i=0;i<10;i++) {
		printf(" Introduce la edad del alumno #%d ",i);
		scanf("%d",&edades[i]);
	}
	//Imprimir el arreglo
	printf(" Listado de Alumnos \n");
	for (int i=0;i<10;i++) {
		printf(" Edad del alumno #%d: %d\n", i, edades[i]);
	}
	//Retorno
	return 0;
}
