#include<stdio.h>
int main()
{
	int num1, num2, x;
	int resultado;
	printf ("escoge una opcion\n");
	printf ("1)suma\n");
	printf ("2)resta\n");
	printf ("3)division\n");
	scanf ("%d",&x);
	switch(x){
		case 1:
			scanf ("%d",&num1);
			scanf ("%d",&num2);
			resultado=num1+num2;
			printf ("resultado:");
			printf ("%d",resultado);
			break;
	    case 2:
			scanf ("%d",&num1);
			scanf ("%d",&num2);
			resultado=num1-num2;
			printf ("resultado:");
			printf ("%d",resultado);
			break;
		case 3:
			scanf ("%d",&num1);
			scanf ("%d",&num2);
			resultado=num1/num2;
			printf ("resultado:");
			printf ("%d",resultado);
			break;
}
return 0;
}

