#include<stdio.h>
main ()
{
	int gasto,tarifa,gan;
	printf("numero de kw por hora \n");
	scanf("%d",&gasto);
	printf("gasto anterior");
	scanf("%d",&gan);
	if(gan<gasto){
	if(gasto<1000 && gasto>0){
		     tarifa=1.2;
	 printf("monto: %d", tarifa*gasto);
	}
	if(gasto>1000 && gasto<1850){
		tarifa=1.8;
		printf("monto: %d", tarifa*gasto);
	}
	if(gasto>1850){
		tarifa=2.1;
		printf("monto: %d", tarifa*gasto);
		
	}
	}
	else{
		printf("tarifa invalida");
	}
}
