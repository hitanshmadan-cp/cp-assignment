#include<stdio.h>

main()
{
int a,b,c;
printf("enter 3 sides of triangles\n");
scanf("%d\n%d\n%d",&a,&b,&c);
if(a*a==b*b+c*c)
   printf("Angle A is of 90 Degrees");
else
   printf("Not of 90 Degree");
}
