#include<stdio.h>
int main()
{
    int a,b,i,count=0,chenel,chenel2;
    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a==-1 && b==-1)
        {
            break;
        }
        if(a<b)
        {
            chenel=b-a;
        }
        else
        {
            chenel=a-b;
        }
        if(a<b)
        {
            a=a+100;
            chenel2=a-b;
        }
        else
        {
            b=b+100;
            chenel2=b-a;
        }
        if(chenel<chenel2)
        {
            printf("%d\n",chenel);
        }
        else
        {
            printf("%d\n",chenel2);
        }
    }
    return 0;
}
