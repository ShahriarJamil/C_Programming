
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N<10000)
    {
        int arr[N],i;
        for(i=0; i<N; i++)
        {
            scanf("%d",&arr[i]);
        }
        if(arr[i]>-10000000 && arr[i]<10000000)
        {
            for(i=0; i<N; i++)
            {
                if(arr[i]==0)
                {
                    printf("NULL\n");
                }
                else if(arr[i]%2==0)
                {
                    if(arr[i]>0)
                    {
                        printf("EVEN POSITIVE\n");
                    }
                    else if(arr[i]<0)
                    {
                        printf("EVEN NEGATIVE\n");
                    }

                }
                else if(arr[i]%2!=0)
                {
                    if(arr[i]>0)
                    {
                        printf("ODD POSITIVE\n");
                    }
                    else if(arr[i]<0)
                    {
                        printf("ODD NEGATIVE\n");
                    }

                }
            }
        }
    }
return 0;
}
