#include<stdio.h>
int main()
{
	int num,residuo,c=-1;
	while (num!=c)
	{
	printf("Ingrese un numero: ");
	scanf("%d",&num);
	residuo=num%5;
	if (residuo!=0)
	{
	printf("es numero primo\n");
	}
	else
	{
	printf("no es numero primo\n");
	}
	}
	return 0;
}
