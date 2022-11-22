#include<stdio.h>
int main()
{
    int x,i;
start:
    scanf("%d",&x);
    if(x<=0)
    {
        return;
    }
    else
    {
        for(i=1; i<x; i++)
        {
            printf("%d ",i);
        }
        printf("%d\n",i);
        goto start;
    }
    return 0;
}
