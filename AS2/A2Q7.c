#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,p,q,r ;
    float x,y;
    printf("enter value of a,b and c");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&p,&q,&r);
    x=(b*r-q*c)/(a*q-b*p);
    y=(a*r-p*c)/(p*b-a*q);
    printf("the point of intersection is (%f,%f)",x,y);
    return 0;
}
