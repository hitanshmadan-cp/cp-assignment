#include<stdio.h>
int main()
{
    int n,a,s=0;
    printf("enter number of term");
    scanf("%d",&n);
    printf("enter terms");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        a=a%10;
        s=s+a;
    }
    printf("the sum of last digits is %d",s);
}
