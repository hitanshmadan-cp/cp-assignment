#include<stdio.h>
#include<math.h>
int main()
{
int  a,b,c,e,f,d ;
    float s;
    printf("enter value of a,b,c,d,e");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    s=(a*c+b*d+e)/sqrt(c*c+d*d);
    printf("the distance between point and line is %f",s);
    return 0;
}
