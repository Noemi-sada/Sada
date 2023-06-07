#include<stdio.h>
#define MAX 25
int main()
{
	/*ejemplo 1*/
	int c;
	for (c='A';c<'z';c++)
	{
		printf("%c",c);
	}
	/*ejemplo 2*/
	int i;
	for (i='9';i<'0';c++)
	{
		printf("%c",c);
	}
	/*ejemplo 3*/
	for (i=1;i<100;i*=2)
	{
		printf("%d",i);
	}
	/*ejemplo 4*/
	int j;
	for (i=0,j=MAX;i<j;i++,j--)
	{
		printf("%d",(i+2*j));
	}
}
