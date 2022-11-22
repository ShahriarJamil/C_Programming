#include<stdio.h>
int main()
{
    int arr1[13],arr2[13],i,I=1,J=60;
    //for I
    for(i=0; i<13; i++)
    {
        arr1[i]=I;
        I+=3;
    }
    //for J
    for(i=0; i<13; i++)
    {
        arr2[i]=J;
        J-=5;
    }
    //print output
    for(i=0; i<13; i++)
    {
        printf("I=%d J=%d\n",arr1[i],arr2[i]);
    }
    return 0;
}
