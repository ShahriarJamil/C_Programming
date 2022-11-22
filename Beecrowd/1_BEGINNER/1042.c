#include<stdio.h>
int main()
{
    int arr[3],i,j;
    int new_arr[3];
    //input in arr[]
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    //copy of arr[] in new_arr[]
    for(i=0;i<3;i++)
    {
        new_arr[i]=arr[i];
    }
    //for ascending of arr[]
    for(i=0;i<3-1;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //print ascending order
    for(i=0;i<3;i++)
    {
        printf("%d\n",arr[i]);
    }
    //print arr[] before ascending
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("%d\n",new_arr[i]);
    }
}
