#include<stdio.h>
int main()
{
    int arr1[15],arr2[15],i,I=1,J=7,count1=0,count2=0;
    //for I
    for(i=0; i<15; i++)
    {
        arr1[i]=I;
        ++count1;
        if(count1==3 || count1==6 || count1==9 || count1==12 || count1==15)
        {
            I+=2;
        }
    }
    //for J
    for(i=0; i<15; i++)
    {
        arr2[i]=J;
        J-=1;
        ++count2;
        if(count2==3 || count2==6 || count2==9 || count2==12 || count2==15)
        {
            J=7;
        }
    }
    //print outpur
    for(i=0; i<15; i++)
    {
        printf("I=%d J=%d\n",arr1[i],arr2[i]);
    }
    return 0;
}
