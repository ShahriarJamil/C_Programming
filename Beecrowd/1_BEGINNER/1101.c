#include<stdio.h>
int main()
{
    int m,n;
    while(1)
    {
        scanf("%d%d",&m,&n);
        if(m<=0 || n<=0)
        {
            break;
        }
        else
        {
            if(m<n)
            {
                int sum=0;
                for(int i=m; i<=n; i++)
                {
                    sum=sum+i;
                    printf("%d ",i);
                }
                printf("Sum=%d\n",sum);
            }
            else
            {
                int sum=0;
                for(int i=n; i<=m; i++)
                {
                    sum=sum+i;
                    printf("%d ",i);
                }
                printf("Sum=%d\n",sum);
            }
        }
    }
    return 0;
}
