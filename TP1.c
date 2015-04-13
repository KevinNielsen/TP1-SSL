/*
 * TP #1
 * Curso: K2051
 * Prof. José María Sola
 * Alumno: Kevin Nielsen
 * Entrega: 14/4/15
*/

#include<stdio.h>

main()
{
	printf("\tTabla de conversion\n\tCelsius a Fahrenheit\n");
	float fahr, celsius;
	int lower,upper,step;
	
	lower = 0;
	upper = 300;
	step=20;
	
	fahr=lower;
	while(celsius<=upper){
		fahr=(celsius*(9.0/5.0))+32.0;
		printf("\t%3.0f\t%6.1f\n",celsius,fahr);
		celsius=celsius+step;
	}
	
}
