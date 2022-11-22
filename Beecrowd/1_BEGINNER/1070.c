#include<stdio.h>
int main()
{
    int X,i,count=0;
    scanf("%d",&X);
    if(0<X)
    {
        for(i=X; count<6; i++)
        {
            if(i%2!=0)
            {
                printf("%d\n",i);
                count++;
            }
        }
    }
    return 0;
}
