#include<stdio.h>
#include<cs50.h>
int flag=0;
int main(void)
{
    int n;
    do
    {
    n=get_int("Height:");
    }while(n<0 || n>23);

    for(int i=0; i<n ;i++)
    {
        flag=(n+1)-(2+i);

        for(int j=0;j<(n+1); j++)
        {

            if(j<flag)
            {
                printf(" ");
            }else
            {
                printf("#");
            }

        }
        printf("\n");
    }


}