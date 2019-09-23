#include<stdio.h>
int main()
{
int n,sum=0;
printf("enter the value");
scanf("%d",&n);
sum=(((n/10)-(n/100*10))+(n-(n/10*10)));
printf("sum is equal to");
printf("%d",sum);
return 0;
}
