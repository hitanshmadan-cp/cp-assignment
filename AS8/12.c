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
      if(a>30&&a<90)
        s=s+a;
    }
    printf("the sum is %d",s);
}
