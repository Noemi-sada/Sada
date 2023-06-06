#include<stdio.h>
main(){
	int ne,c,cpa,ct;
	printf("alimentos");
	scanf("%d",&ne);
	ct=0;
	c=1;
	printf("numero de calorias por alimento");
	printf("%d %s\n",ne, "alimentos tomados:");
	while(c++<= ne){
		scanf("%d",&cpa);
		ct+=cpa;
	}
	printf("calorias totales de hoy:\n");
	printf("%d\n",ct);
	return 0;
}
