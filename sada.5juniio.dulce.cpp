#include <stdio.h>
int main(){
	char car;
	printf("Ingrese una vocal: ");
	scanf("%c",&car);
    switch (car)
{
	case 'a': case 'A':
		printf("%c es una vocal\n",car);
		break;
	case 'e': case 'E':
		printf("%c es una vocal\n",car);
		break;
    case 'i': case 'I':
		printf("%c es una vocal\n",car);
		break; 
	case 'o': case 'O':
		printf("%c es una vocal\n",car);
		break;
	case 'u': case 'U':
		printf("%c es una vocal\n",car);
		break;
		default:
		printf("%c es no es una vocal\n",car);
}
}
