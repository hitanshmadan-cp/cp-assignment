#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,dis;
printf("\nenter the value of points(a,b)");
scanf("%d%d",&a,&b);
printf("\nenter the value of points(c,d)");
scanf("%d%d",&c,&d);
dis=sqrt(pow((a-c),2)+pow((b-d),2));
printf("\nDistance between two points ");
printf("%d",dis);
return 0;
}

