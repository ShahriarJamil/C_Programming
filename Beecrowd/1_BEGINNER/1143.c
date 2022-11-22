#include<stdio.h>
#include <break.h>
int main()
{
    int x,y,i,j=1;
    scanf("%d%d",&x,&y);
    int n=x;
    for(i=0; i<y; i++)
    {
        for(j; j<=n; j++)
        {
            printf("%d ",j);
            if(j==y)
            {
                break(2) ;
            }
        }
        n+=x;
        printf("\n");
    }
    return 0;
}
