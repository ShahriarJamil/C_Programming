#include<stdio.h>
int main()
{
    int X,Y,i,sum=0;
    scanf("%d%d",&X,&Y);
    if(X<Y)
    {
        int temp=X;
        X=Y;
        Y=temp;
    }
    if(X<0 && Y<0)
    {
        for(i=X-1; i>Y; i--)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
    }
    else if(X>0 && Y>0)
    {
        for(i=Y+1; i<X; i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
    }
    else if(X>0 && Y<0)
    {
        for(i=Y+1; i<X; i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
    }
    printf("%d",sum);
    return 0;
}
