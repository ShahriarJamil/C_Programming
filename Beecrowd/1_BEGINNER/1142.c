#include<stdio.h>
int main()
{
    int a,i,j=0,k=3;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        for(j+=1; j<=k; j++)
        {
            printf("%d ",j);
        }
        printf("PUM\n");
        k+=4;
    }
    return 0;
}
