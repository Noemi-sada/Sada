#include<stdio.h>

int main(void)
{
	char *palabra[]={"holamundo1","holamundo2","holamundo3"};
	
	int i ,tam=sizeof(palabra)/sizeof(char *);
	
	for (i=0;i<tam;++i)
	
    	printf("%s\n",palabra[i]);
	
	printf(" ");
	
	return 0;
}
