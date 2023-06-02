#include<stdio.h>
int main()
{
	float cal;
	printf("Ingrese una calificacion: ");
	scanf("%f",&cal);
	char nota[]="aprobado";
	if (cal>5){
		puts(nota);
	}
	return 0;
}
	
