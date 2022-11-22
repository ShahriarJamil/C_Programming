#include <stdio.h>
int main()
{
    int year,x,month,day,N;
    scanf("%d",&N);
    year=N/365;
    x=N%365;
    month=x/30;
    day=x%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
    return 0;
}
