#include<stdio.h>
int main()
{
    int number,count=2,count1=1;
    printf("Enter a integer number : ");
    scanf("%d",&number);

    if(number==0)
    {
        printf("There is a run time error");
    }
    while(1)
    {
        if(number==0)
        {
            break;
        }
        else if(number%2==0)
        {
            number=number/count;
            printf("%d ",number);
            count+=2;
        }
        else
        {
            if(number==1)
            {
                count1+=2;
            }
            number=number/count1;
            printf("%d ",number);
            count1+=2;
        }
    }

    return 0;
}
