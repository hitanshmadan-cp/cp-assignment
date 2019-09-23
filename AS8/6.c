#include<stdio.h>
int main()
{
    int n,a,s=0,b,c;
    printf("enter number of term");
    scanf("%d",&n);
    printf("enter terms");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=a%10;
        a=a/10;
        c=a%10;
        a=a/10;
        s=s+a*100+b*10+c;
    }
    printf("the sum of digits is %d",s);
}
