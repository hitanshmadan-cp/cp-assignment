#include<stdio.h>
int main()
{
    int n,a,s=0,c=0;
    printf("enter number of term");
    scanf("%d",&n);
    printf("enter terms");
    for(int i=1;i<=n;i++)
    {
      scanf("%d",&a);
      if(a%2!=0)
     {
      c=c+1;
      s=s+a;}
    }
    printf("the avg is %d",s/c);
}
