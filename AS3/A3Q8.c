#include<stdio.h>
#include<math.h>
main()
{
float a,b,c;
printf("enter three numbers\n");
scanf("%f\n%f\n%f",&a,&b,&c);
if(a==b)
   printf("odd number is %f\n",c);
if(a==c)
   printf("odd number is %f\n",b);
if(b==c)
   printf("odd number is %f\n",a);
}

