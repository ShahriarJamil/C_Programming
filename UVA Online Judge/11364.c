#include<stdio.h>
int main()
{
    int Case,i,j,k;
    scanf("%d",&Case);

    for(i=0; i<Case; i++)
    {
        int Stores;
        scanf("%d",&Stores);
        int arr[Stores];
        for(j=0; j<Stores; j++)
        {
            scanf("%d",&arr[j]);
        }

        if(Case==1)
        {
            printf("0\n");
        }

        else
        {
            for(j=0; j<Stores; j++)
            {
                for(k=j+1; k<Stores; k++)
                {
                    if(arr[j]<arr[k])
                    {
                        int temp=arr[j];
                        arr[j]=arr[k];
                        arr[k]=temp;
                    }
                }
            }

            int sum=0;
            for(j=0; j<Stores-1; j++)
            {
                k=j+1;
                sum=sum+(arr[j]-arr[k]);
            }
            printf("%d\n",sum*2);
        }
    }
    return 0;
}
