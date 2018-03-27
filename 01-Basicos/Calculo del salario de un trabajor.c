/*
A un trabajador le pagan según sus horas trabajadas y la tarifa está a un valor por
hora. Si la cantidad de horas trabajadas es mayor a 40 horas, la tarifa por hora se
incrementa en un 50% por considerarse que son horas extras. Desarrollar un
programa que calcule el salario del trabajador dadas las horas trabajadas y la tarifa
*/

#include <stdio.h>
int main (void)

{
	int horasTrabajadas;
	float tarifa, salario;

	printf("Ingrese las horas trabajadas: ");
	scanf("%d", &horasTrabajadas);

	printf("Ingrese el valor hora: ");
	scanf("%f", &tarifa);

	if(horasTrabajadas > 40){
	    tarifa = tarifa * 1.5;
	}

	salario = tarifa * horasTrabajadas;

	printf ("\n\n\n");
	printf ("El salario del trabajor es: %.2f",salario);
	printf ("\n\n\n");

	return 0;
}


