#include<stdio.h>
int main()
{
int num,temp,temp1;
printf("enter number");
scanf("%d",&num);
temp=num%10;
num=num/10;;
temp1=num%10;
num=num-temp1+temp;
printf("%d",num);
return 0;
}
