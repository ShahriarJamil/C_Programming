#include<stdio.h>
int main()
{
    float arr[6];
    int i,count=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&arr[i]);
        if(arr[i]!=0)
        {
            if(arr[i]>0)
            {
                count++;
            }
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}
