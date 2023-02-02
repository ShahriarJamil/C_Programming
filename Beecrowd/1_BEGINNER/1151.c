#include<stdio.h>
int main()
{
    int N,a=0,b=1,i,sum;
    scanf("%d",&N);
    printf("%d",a);
    for(i=1;i<N;i++)
    {
        sum=a+b;
        b=a;
        a=sum;
        printf(" %d",sum);
    }
    printf("\n");
    return 0;
}
