#include<stdio.h>
int main()
{
	int contador=1;
	while(contador>100)/*si la prueba logica es falsa,no se ejecuta la sentencia de instrucciones*/
	{
		printf("%d\n",contador);
		contador++;
	}
}
