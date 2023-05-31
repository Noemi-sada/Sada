#include<stdio.h>
int main()
{
	int n=5,t;/*n valdra 5,t tendra un valor de 0*/
	t= ++n*--n;/*primero se da un incremento a n y despues le define el valor(n=5)t tomara el valor de la operacion resultando 25*/
		
	printf("n= %d,t= %d\n",n,t);/*n sera 5 y t sera 25*/
	printf("%d %d %d\n",++n,++n,++n);/*se otorgan 3 incrementos a n y tras cada incremento se redefine su valor siendo que al final tomara el valor de 8*/
}
