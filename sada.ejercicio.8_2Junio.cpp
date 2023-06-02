#include<stdio.h>

int main ()
{
float a,b,c;
printf("Ingrese tres valores: ");
scanf("%f %f %f",&a,&b,&c);
if (a>0)
if (b>0) ++a;
else if (c>0)
if (a<5) ++b;
else if (b<5) ++c;
else --a;
else if (c<5) --b;
else --c;
else
a=0;
printf("%f %f %f\n",a,b,c);
}
