#include<stdio.h>
int main()
{
    int N,in=0,out=0;
    scanf("%d",&N);
    if(N<10000)
    {
        int arr[N],i;
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>-10000000 && arr[i]<10000000)
            {
                if(arr[i]>=10 && arr[i]<=20)
                {
                    ++in;
                }
                else
                {
                    ++out;
                }
            }
        }
        printf("%d in\n",in);
        printf("%d out\n",out);
    }
    return 0;
}
