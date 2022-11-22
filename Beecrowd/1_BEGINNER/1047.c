#include<stdio.h>
int main()
{
    int start,end,start_minute,end_minute,hours,minutes;
    scanf("%d%d%d%d",&start,&start_minute,&end,&end_minute);
    if(start<end)
    {
        minutes=((end-start)*60)+end_minute-start_minute;
    }
    else if(start>end)
    {
        minutes=(((24-start)+end)*60)+end_minute-start_minute;
    }
    else if(start==end)
    {
        if(start_minute<end_minute)
        {
            minutes=end_minute-start_minute;
        }
        else
        {
            minutes=(24*60)+end_minute-start_minute;
        }
    }
    hours=minutes/60;
    minutes=minutes%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hours,minutes);

    return 0;
}

