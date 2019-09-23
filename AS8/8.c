#include<stdio.h>
int main()
{
    int a,n,s=0;
    printf("enter number of term");
    scanf("%d",&n);
    printf("enter terms");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        s=s+i*a;
    }
    printf("the weighted sum is %d",s);
}
