#include<stdio.h>
int main()
{
    int n,a,b,s=0,c=1;
    printf("enter number of term");
    scanf("%d",&n);
    printf("enter terms");
    for(int i=1;i<=n;i++)
    {
      scanf("%d",&a);
      if(a%2==0)
      {
          s=s+a*c;
        c=c+1;}
    }
    printf("the sum is %d",s);
}
