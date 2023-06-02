#include<stdio.h>
int main()
{
	float num;
	printf("Ingrese un numero: ");
	scanf("%f",&num);
	if (num==0){
		printf("Es igual");}
	if (num<0){
		printf("Es menor");}
	if (num>0){
		printf("Es mayor");}
	return 0;
}
