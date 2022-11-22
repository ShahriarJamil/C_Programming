#include<stdio.h>
int main()
{
    int i,j;
    int arr1[100],arr2[100];
    for(i=0; i<100; i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
    }


    for(i=0; i<100-1; i++)
    {
        for(j=i+1; j<100; j++)
        {
            if(arr1[i]<arr1[j])
            {
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    for(i=0; i<100; i++)
    {
        if(arr2[i]==arr1[0])
        {
            printf("%d\n",arr2[i]);
            printf("%d\n",i+1);
        }
    }
    return 0;
}
