#include<stdio.h>
void main()
{
    int n,ar[n],s=0,p;
    printf("enter number of terms");
    scanf("%d",&n);
    printf("enter terms");
    for(int i=0;i<n;i++)

    scanf("%d",&ar[i]);
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
            p=i;
          break;
    }
      for(int i=p;i<n;i++)
        s=s+ar[i];
      printf("the sum is %d",s);
}
