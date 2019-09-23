#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f ;
    float dis;
    printf("enter coordinates of triangles");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    dis=0.5*((a-c)*(d-f)-(c-e)*(b-d));
    printf("the area of triangle is %f",dis);
    return 0;
}
