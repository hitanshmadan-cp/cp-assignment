#include<stdio.h>
int main()
{
    int n,a,s;
    printf("enter number of term");
    scanf("%d",&n);
    printf("enter terms");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
         s=a;
    }
    printf("the sum of digits is %d",s);
}
