#include<stdio.h>
int main()
{
    int X,Y;
    float total;
    scanf("%d",&X);
    scanf("%d",&Y);
    if(X==1)
    {
        total=4.00*Y;
        printf("Total: R$ %.2lf\n",total);
    }
    else if(X==2)
    {
        total=4.50*Y;
        printf("Total: R$ %.2lf\n",total);
    }
        else if(X==3)
    {
        total=5.00*Y;
        printf("Total: R$ %.2lf\n",total);
    }
        else if(X==4)
    {
        total=2.00*Y;
        printf("Total: R$ %.2lf\n",total);
    }
        else if(X==5)
    {
        total=1.50*Y;
        printf("Total: R$ %.2lf\n",total);
    }

    return 0;
}

