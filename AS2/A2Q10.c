#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,p,x ;
    float s;
    printf("enter centre coordinates,radius and line where circle cuts ");
    scanf("%f%f%f%f",&a,&b,&c,&s);
    p=a-s;
    x=sqrt(c*c-p*p);
    printf("the length of chord is %f",x*2);
    return 0;
}
