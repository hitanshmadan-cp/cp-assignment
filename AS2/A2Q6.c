#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c ;
    float r;
    printf("enter value of a,b and c of circle");
    scanf("%f%f%f",&a,&b,&c);
    r=sqrt(a*a/4+b*b/4-c);
    printf("the centre of the circle is (%f,%f) and the radius is r %f",-a/2,-b/2,r);
    return 0;
}
