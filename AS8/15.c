#include<stdio.h>
int main()
{
    int n,a,b,s=0,c=0;
    float f;
    printf("enter number of term");
    scanf("%d",&n);
    printf("enter terms");
    for(int i=1;i<=n;i++)
    {
      scanf("%d",&a);
      if(a%2==0)
      {
          s=s+a*i;
        c=c+i;}
    }
    f=s/c;
    printf("the sum is %f",f);
}
