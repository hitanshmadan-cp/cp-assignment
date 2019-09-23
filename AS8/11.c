#include<stdio.h>
int main()
{
    int n,a,b,s=0;
    printf("enter number of term");
    scanf("%d",&n);
    printf("enter terms");
    for(int i=1;i<=n;i++)
    {
      scanf("%d",&a);
      b=a%10;
      if(b%3==0)
        s=s+a;
    }
    printf("the sum is %d",s);
}
