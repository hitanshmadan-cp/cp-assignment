#include<stdio.h>
int main()
{
int a,b,c,p,x;
printf("enter the value of 4 numbers");
scanf("%d%d%d%d",&a,&b,&c,&x);
p=(a*(x*x))+(b*x)+c;
printf("the output of function ax^2+bx+c is:");
printf("%d",p);
return 0;
} 
