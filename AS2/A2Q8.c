#include<stdio.h>
#include<math.h>
int main()
{
    float y,b,c,x,z ;
    float s;
    printf("enter side of triangle a,b and c");
    scanf("%f%f%f",&y,&b,&c);
    x=acos((-y*y+b*b+c*c)/2*b*c);
    z=x*180/3.14;
    printf("angle of triangle is %f",z);
    return 0;
}
