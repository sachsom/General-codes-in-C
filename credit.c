#include<stdio.h>
#include<cs50.h>
#include<math.h>
long long n;
int size = 0;
int a, b, split_a, split_b;
int sizer(long long x);
int splitsum(int x);
int main(void)
{
    do
    {
        n = get_long_long("Number: ");
    }
    while (n < 0);                      //done with input
    size = sizer(n);

    int i = sizer(n);
    long long num = n;
    while (num != 0)
    {                                   // main algo


        b = num % 10;
        split_b = split_b + (b);
        num= num / 10;

        a = num % 10;
        a  =a * 2;
        if(sizer(a) > 1)
        {
         split_a = split_a + splitsum(a);
        }
        else
        {
        split_a=split_a+a;
        }
        num=num/10;
        i--;
    }

    int check=split_a+split_b;

    if(check%10==0)
    {
        if(sizer(n)==15)
        {
            if(floor(n/10000000000000)==34 || floor(n/10000000000000)==37)
            {
        printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (floor((n / (pow(10,(size-1)))))==4)
        {
            if(size==13 || size ==16)
            {
                printf("VISA\n");
            }
            else
            {
             printf("INVALID\n");
            }


        }
        else
        {
            if(floor(n/100000000000000)==51 || floor(n/100000000000000)==52  || floor(n/100000000000000)==53 || floor(n/100000000000000)==54 ||floor(n/100000000000000)==55 )
            {
            printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }

            }
    }
    else
    {
        printf("INVALID\n");
    }

}



int sizer(long long x)
{
    int sz=0;
while(x!=0)
    {
        x=x/10;
        sz++;
    }

    return sz;
}


int splitsum(int x)
{
    int sum=0;
    while(sizer(x)>0)
    {
        sum=sum+(x%10);
        x=x/10;
    }
    return sum;
}