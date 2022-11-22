#include<stdio.h>
int main()
{
    int Case,a,b,c,i,count=0;
    scanf("%d",&Case);
    for(i=0;i<Case;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        int sum=a+b+c;
        if(sum>1)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
