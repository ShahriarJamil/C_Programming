#include<stdio.h>
int main()
{
    int arrSize;
    printf("Enter the array size : ");
    scanf("%d",&arrSize);
    int arr[arrSize],i,sum=0,sub=0,totalSum,number=1;

    //input number '0 to arrSize'
    for(i = 0; i < arrSize; i++)
    {
        arr[i]=number;
        number++;
    }

    //calculate plus and minus
    for(i=1; i<arrSize; i++)
    {
        sum=sum+arr[i];
        ++i;
        if (i < arrSize)
        {
            sub=sub+arr[i];
        }
    }

    //calculate 'total sum' and print
    totalSum=sum-sub;
    printf("Total sum = %d",totalSum+1);
    return 0;
}
