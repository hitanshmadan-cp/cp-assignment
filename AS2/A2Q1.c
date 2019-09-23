#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,ar;
    printf("enter sides of triangle");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle id %f",ar);
    return 0;

}




