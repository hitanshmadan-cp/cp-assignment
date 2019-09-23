#include<stdio.h>
int main()
{
    int n,ar[n],s=0;
    int i=0;
    printf("enter number of terms");
    scanf("%d",&n);

    for(  i=0;i<n;i++)
    {
      printf("enter %d term",(i+1));
    scanf("%d",&ar[i]);}
    for( i=0;i<n-1;i++)
    {
         s=s+ar[i-1]*ar[i];}
     printf("the sum is equal to %d",s);
    return 0;
}
