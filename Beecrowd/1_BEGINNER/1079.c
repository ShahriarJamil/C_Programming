#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    float arr2[3],sum,average;
    for(i=0; i<N; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%f",&arr2[j]);
        }
        sum=(arr2[0]*2)+(arr2[1]*3)+(arr2[2]*5);
        average=sum/10;
        printf("%.1f\n",average);
    }
    return 0;
}
