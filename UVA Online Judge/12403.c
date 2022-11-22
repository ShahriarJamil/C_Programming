#include<stdio.h>
int main()
{
    int Case,account=0,donate;
    scanf("%d",&Case);
    char input[15];
    int i;
    for(i=0; i<Case; i++)
    {
        scanf("%s",input);
        if(strcmp(input,"report")==0)
        {
            printf("%d\n",account);
        }
        else
        {
            scanf("%d",&donate);
            account+=donate;
        }
    }
    return 0;
}
