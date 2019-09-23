#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {if(i%2==0)
       {
        for(j=1;j<=2;j++)
        {
           printf("*00*0**00**0*00");
        }
       }
        else
        {
        for(j=1;j<=30;j++)
             printf("0");
        }

        printf("\n");
    }
}
