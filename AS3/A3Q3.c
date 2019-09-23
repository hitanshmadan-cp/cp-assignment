#include<stdio.h>

main()
{
int a,b;
printf("enter 2 numbers\n");
scanf("%d\n%d",&a,&b);
if(b>a)
   printf("bigger no. %d\nsmaller no. %d\n",b,a);
else
   printf("bigger no. %d\nsmaller no. %d\n",a,b);
}
