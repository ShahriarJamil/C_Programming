
#include<stdio.h>
int main()
{
    float arr[6],sum,average;
    int i,count=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&arr[i]);
        if(arr[i]!=0)
        {
            if(arr[i]>0)
            {
                count++;
                sum=sum+arr[i];
            }
        }
    }
    average=sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",average);
    return 0;
}
