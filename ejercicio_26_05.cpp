#include<stdio.h>
int main()
{
	int a[10]={10,1,2,-3,-100,1000,-200,7,1,0};
	int r=0;
	int mayor,i;
	for(int i=0;i<10;i++){
	if (a[i]>r){
	mayor=i;
	printf("\n\n%d",a[i]);
	printf("\n: %d",mayor);
	}
	}
	return 0;
}
