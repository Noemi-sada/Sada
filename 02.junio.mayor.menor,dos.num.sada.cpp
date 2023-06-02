#include<stdio.h>
int main()
{
	float numero1,numero2;
	printf("Ingrese dos numeros: ");
	scanf("%f %f",&numero1,&numero2);
	if (numero1<numero2){
		printf("numero menor es %f",numero1);}
	if (numero1>numero2){
		printf("numero mayor es %f",numero1);}
	return 0;
}
