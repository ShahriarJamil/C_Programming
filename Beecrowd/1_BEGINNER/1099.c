#include<stdio.h>
int main()
{
    int n,i,j,x,y;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&x,&y);
        if(x<y)
        {
            if(x%2==0)
            {
                int sum=0;
                for(j=x+1; j<y; j=j+2)
                {
                    sum=sum+j;
                }
                printf("%d\n",sum);
            }
            else
            {
                int sum=0;
                for(j=x+2; j<y; j=j+2)
                {
                    sum=sum+j;
                }
                printf("%d\n",sum);
            }
        }
        else
        {
            if(y%2==0)
            {
                int sum=0;
                for(j=y+1; j<x; j=j+2)
                {
                    sum=sum+j;
                }
                printf("%d\n",sum);
            }
            else
            {
                int sum=0;
                for(j=y+2; j<x; j=j+2)
                {
                    sum=sum+j;
                }
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}
