#include<stdio.h>
int main()
{
    int X,i;
    scanf("%d",&X);
    if(1<=X<=1000)
    {
        for(i=1;i<=X;i++)
        {
            printf("%d\n",i);
            ++i;
        }
    }
    return 0;
}

