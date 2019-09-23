#include<stdio.h>
int main()
{
    int n,a,s=0,b;
    printf("enter number of term");
    scanf("%d",&n);
    printf("enter terms");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=a%10;
        a=a/100;
        s=s+a*10+b;
    }
    printf("the sum of digits is %d",s);
}
