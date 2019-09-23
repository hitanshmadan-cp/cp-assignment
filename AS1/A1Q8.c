#include<stdio.h>
int main()
{
int num,temp;
printf("enter number");
scanf("%d",&num);
temp=num%10;
if(temp<5)
{
num=num+temp;
printf("%d",num);
}
else
printf("enter the no such that its last digit is less than 5");
return 0;
}
