#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d ;
    float dis;
    printf("enter coordinates");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    dis=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("distance between points is %f",dis);
    return 0;
}
