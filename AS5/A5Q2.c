#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=20;j++)
        {
            if(i<=3)
            {
             if(j<=8)
                printf("0");
             else
                printf("*");
            }
            if(i>3&&i<=7)
                printf("*");
            if(i>7)
            {
                if(j<=15)
                    printf("*");
                else
                    printf("0");
            }
        }
        printf("\n");
    }
}
