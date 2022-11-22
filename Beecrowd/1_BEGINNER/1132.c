#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int sum=0;
    if(x<y)
    {
        for(int i=x; i<=y; i++)
        {
            if(i%13!=0)
            {
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }
    else
    {
        for(int i=y; i<=x; i++)
        {
            if(i%13!=0)
            {
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
