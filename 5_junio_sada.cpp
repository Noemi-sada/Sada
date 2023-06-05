#include<stdio.h>
int main (){
	int opcion;
	printf("Ingrese un numero(0-3): ");
	scanf("%d",&opcion);
	switch (opcion)
	{
		case 0:
			printf("Se introdujo la variable  ");
		    puts ("cero");
		    break;
		case 1:
			printf("Se introdujo la variable  ");
		    puts ("uno");
		    break;
		case 2:
			printf("Se introdujo la variable  ");
		    puts ("dos");
		    break;
		case 3:
			printf("Se introdujo la variable  ");
		    puts ("tres");
		    break;
		default:
			puts ("fuera de rango");
		    
	}
}
