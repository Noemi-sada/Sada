#include <stdio.h>
int main ()
{
	float c[5],r=0;
	int i;
	for (i=0; i<5; i++){
		printf("%d\n",i+1);
		scanf("%f\n",&c[i]);
		r=r+c[i];
		printf("\n");
    } 
	
	printf("%.2f\n", r/5);
	return 0; 
}

