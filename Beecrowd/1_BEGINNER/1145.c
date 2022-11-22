#include<stdio.h>
int main()
{
    int x,y,i,j;
    scanf("%d%d",&x,&y);
    int n=x;
    for(i=1; i<=y; i++)
    {
        for(j=1; j<n; j++)
        {

            printf("%d ",i);
            if(i==y)
            {
                goto end;
            }
            i++;
        }
        printf("%d\n",i);
    }
end :
    return 0;
}
