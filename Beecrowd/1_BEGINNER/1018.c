#include <stdio.h>
int main()
{
    int N,i,c,totalNotes,arr[]= {100,50,20,10,5,2,1};
    scanf("%d",&N);
    printf("%d\n",N);
    if(0<N && N <1000000)
    {
        for(i=0; i<7; i++)
        {
            c=arr[i];
            totalNotes=N/c;
            N=N%c;
            printf("%d nota(s) de R$ %d,00\n",totalNotes,c);
        }
    }
    return 0;
}
