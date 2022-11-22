#include <stdio.h>
int main()
{
    int HOUR,X,MINUT,SECOND,N;
    scanf("%d",&N);
    HOUR=N/3600;
    X=N%3600;
    MINUT=X/60;
    SECOND=X%60;
    printf("%d:%d:%d\n",HOUR,MINUT,SECOND);
    return 0;
}
