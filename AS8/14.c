#include<stdio.h>
int main()
{
    int n,a,b,c,s=0;
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
      if(b>=c)
      {
          a=a*100+c*10+b;
      }
     else
     {
         a=a*100+b*10+c;
     }
     s=s+a;
    }
    printf("the sum is %d",s);
}
