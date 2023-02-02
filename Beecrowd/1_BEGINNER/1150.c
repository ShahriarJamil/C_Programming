#include<stdio.h>
int main()
{
    int x,z,i,sum,count=0;
    scanf("%d",&x);
    sum=x;
again_z:
    scanf("%d",&z);
    if(z<=x)    goto again_z;
    while(1)
    {
        ++x;
        sum=sum+x;
        ++count;
        if(sum>z)   break;
    }
    printf("%d\n",count+1);
    return 0;
}
