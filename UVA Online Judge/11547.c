#include<stdio.h>
int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    for (i=0; i<t; i++)
    {
        int count=0,count1=1,tensColumn;
        scanf("%d",&n);
        n=((((((n*567)/9)+7492)*235)/47)-498);
        tensColumn=n;
        while(n!=0)
        {
            n=n/10;
            count=count+1;
            count1=count1*10;
        }
        count1=count1/10;
        if(count==2)
        {
            tensColumn=tensColumn/count1;
            printf("%d\n",tensColumn);
        }
        else
        {
            for(j=0; j<count-2; j++)
            {
                tensColumn=tensColumn%count1;
                count1=count1/10;
            }
            if(tensColumn<0)
            {
                printf("%d\n",(tensColumn/10)*-1);
            }
            else
            {
                printf("%d\n",tensColumn/10);
            }
        }
    }
    return 0;
}
