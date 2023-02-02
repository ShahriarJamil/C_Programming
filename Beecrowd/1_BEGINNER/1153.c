#include<stdio.h>
int main()
{
    int n,i,multiplies=1;
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        multiplies=multiplies*i;
    }
    printf("%d\n",multiplies);
    return 0;
}
