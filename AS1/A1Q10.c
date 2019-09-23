#include<stdio.h>
int main()
{
int n,temp;
printf("enter the number");
scanf("%d",&n);
temp=(((n/100)*100)+((n-n/10*10)*10)+( n/10)-((n/100)*10));
printf("changed number is");
printf("%d",temp);
return 0;
}

