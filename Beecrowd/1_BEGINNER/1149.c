#include<stdio.h>
int main()
{
    int A,N,i,sum=0;
    scanf("%d",&A);
again_n:
    scanf("%d",&N);
    if(N<=0)    goto again_n;
    for(i=0; i<N; i++)
    {
        sum=sum+A;
        ++A;
    }
    printf("%d\n",sum);
    return 0;
}
