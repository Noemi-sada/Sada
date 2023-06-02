#include<stdio.h>
int main()
{
	int num,num2;
	float res,r;
	
	printf("Escriba dos numeros: \n");
	scanf("%d %d",&num,&num2);
	if (num % num2 == 0){
		printf("El numero es divisible\n");
		printf("El divisor es: %d\n",num);
		printf("El dividendo es: %d\n",num2);
		res=num/num2;
		r=num%num2;
		printf("El cociente es: %.2f\n",res);
		printf("El residuo es: %.2f\n",r);
	}
	else{
		printf("El numero no es divisible\n");
		printf("El divisor es: %d\n",num);
		printf("El dividendo es: %d\n",num2);
		res=num/num2;
		r=num%num2;
		printf("El cociente es: %.2f\n",res);
		printf("El residuo es: %.2f\n",r);
	}
	return 0;
}
