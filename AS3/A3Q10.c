#include<stdio.h>
main()
{
float a,b,c,d,x,sum=0;
printf("enter five numbers\n");
scanf("%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&x);
if(x==a)
   sum=sum+1;
if(x==b)
   sum=sum+1;
if(x==c)
   sum=sum+1;
if(x==d)
   sum=sum+1;
printf("count = %f\n",sum);
}

