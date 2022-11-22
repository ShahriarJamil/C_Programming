#include<stdio.h>
int main()
{
    //Input of starting day
    int Day_S,H_S,M_S,S_S;
    scanf("%*s %d",&Day_S);
    scanf("%d %*s %d %*s %d",&H_S,&M_S,&S_S);

    //Input of finishing day
    int Day_E,H_E,M_E,S_E;
    scanf("%*s %d",&Day_E);
    scanf("%d %*s %d %*s %d",&H_E,&M_E,&S_E);

    //Calculate the total working day of event
    int total_day,full_work_day;
    total_day=(Day_E-Day_S)+1;
    full_work_day=(total_day-2);

    //Calculate the time of first day
    if(S_S==0 && M_S==0)
    {
        H_S=(24-H_S);
    }
    else if(S_S==0 && M_S!=0)
    {
        H_S=(24-H_S-1);
        M_S=(60-M_S);
    }
    else if(S_S!=0 && M_S==0)
    {
        H_S=(24-H_S);
        M_S=(60-1);
        S_S=(60-S_S);
    }
    else if(S_S!=0 && M_S!=0)
    {
        H_S=(24-H_S-1);
        M_S=(60-M_S-1);
        S_S=(60-S_S);
    }

    //Calculate the time of last day
    if(S_E==0 && M_E==0)
    {
        H_E=(24-H_E);
    }
    else if(S_E==0 && M_E!=0)
    {
        H_E=(24-H_E-1);
        M_E=(60-M_E);
    }
    else if(S_E!=0 && M_E==0)
    {
        H_E=(24-H_E);
        M_E=(60-1);
        S_E=(60-S_E);
    }
    else if(S_E!=0 && M_E!=0)
    {
        H_E=(24-H_E-1);
        M_E=(60-M_E-1);
        S_E=(60-S_E);
    }

    //Calculate the total time of event in seconds
    int seconds_of_full_work_day,seconds_of_first_day,seconds_of_last_day,seconds_of_total_event;
    seconds_of_full_work_day=(full_work_day*24)*60*60;
    seconds_of_first_day=(H_S*60*60)+(M_S*60)+S_S;
    seconds_of_last_day=(86400-((H_E*60*60)+(M_E*60)+S_E));
    seconds_of_total_event=seconds_of_full_work_day+seconds_of_first_day+seconds_of_last_day;

    //Calculate the Days, Hours, Minutes, Seconds
    int days,hours,minutes,seconds;
    minutes=(seconds_of_total_event/60);
    seconds=(seconds_of_total_event%60);
    hours=(minutes/60);
    minutes=(minutes%60);
    days=hours/24;
    hours=hours%24;

    //print the outputs
    printf("%d dia(s)\n",days);
    printf("%d hora(s)\n",hours);
    printf("%d minuto(s)\n",minutes);
    printf("%d segundo(s)\n",seconds);

    return 0;
}
