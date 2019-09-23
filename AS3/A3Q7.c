#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,m,p;
printf("enter the value of a,b and c of quadratic equation");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
    m=sqrt(d);
    printf("the root of quadratic equation is %f%f",(-b+m)/(2*a),(-b-m)/(2*a));
}
else if(d==0){
     printf("the root of quadratic equation is %f%f",(-b)/(2*a),(-b)/(2*a));}
else
{
    p=sqrt(-d);
        printf("the roots are %f%+fi,%f%fi",-b/2*a,p/2*a,-b/2*a,-p/2*a);
}
}
