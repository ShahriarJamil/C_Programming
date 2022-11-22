#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int testCase;
    for (testCase=0; testCase<t; testCase++)
    {
        int arr[3];
        int arrayInput;
        for (arrayInput=0; arrayInput<3; arrayInput++)
        {
            scanf("%d",&arr[arrayInput]);
        }

        int i;
        for (i=0; i<2; i++)
        {
            int j;
            for (j=i+1; j<3; j++)
            {
                if(arr[i]<arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        printf("Case %d: %d\n",testCase+1,arr[1]);
    }
    return 0;
}
