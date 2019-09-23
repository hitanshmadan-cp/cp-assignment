#include<stdio.h>

main()
{
int a,b,c,d,max;
printf("enter 3 numbers\n");
scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
max=a;
if(b>max)
   max=b;
if(c>max)
   max=c;
if(d>max)
   max=d;
printf("greatest nos = %d\n",max);
}
