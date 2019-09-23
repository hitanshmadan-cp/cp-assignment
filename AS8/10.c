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
        if(a%2!=0)
         s=s+1;
    }
    printf("the total odd number  %d",s);
}
