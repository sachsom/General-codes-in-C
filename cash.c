#include<stdio.h>
#include<cs50.h>
#include<math.h>
float n;
int flag=0;
int count=0;
int arr[4]={25,10,5,1};
int main(void)
{
    do
    {
      n = get_float("Change owed:");
    } while(n < 0);

    n=roundf(n*100);



    while(n!=0)
    {
        while(n/arr[flag]<1)
        {
            flag++;
        }
            if(arr[flag]==1)
            {
                count=count+n;
                n=0;
            }else
            {
                if((int)n%(int)arr[flag]==0)
                {
                    count=count+(n/arr[flag]);
                    n=0;
                }else
                {
                   count=count+((int)(n/arr[flag]));
                   n=(int)n %(int) arr[flag];

                }
            }

    }

    printf("%d\n",count);
}

