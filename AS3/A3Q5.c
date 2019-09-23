#include<stdio.h>

main()
{
float a,b,c,s;
printf("enter equation constants as of a*x+b*y+c=0\n");
scanf("%f\n%f\n%f",&a,&b,&c);
s=-a/b;
if(b==0)
  printf("line is vertical\n");
printf("slope is = %f",s);
}
