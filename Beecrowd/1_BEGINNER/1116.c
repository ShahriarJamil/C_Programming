#include<stdio.h>
int main()
{
    int m,n,a,i=0;
    scanf("%d",&a);
    while(i<a)
    {
        scanf("%d%d",&m,&n);
        if(n==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            float devide=(float)m/n;
            printf("%.1f\n",devide);
        }
        i++;
    }
    return 0;
}
