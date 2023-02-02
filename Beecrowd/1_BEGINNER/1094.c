#include<stdio.h>
int main()
{
    int n,i,rabbit=0,rat=0,frog=0,sum;
    scanf("%d",&n);
    int int_arr[n];
    char char_arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %c",&int_arr[i],&char_arr[i]);
        if(char_arr[i] == 'C')  rabbit=rabbit+int_arr[i];
        else if(char_arr[i] == 'R')  rat=rat+int_arr[i];
        else if(char_arr[i] == 'S')  frog=frog+int_arr[i];
    }
    sum=rabbit+rat+frog;
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);

    printf("Percentual de coelhos: %.2f %%\n",(float)(rabbit*100)/sum);
    printf("Percentual de ratos: %.2f %%\n",(float)(rat*100)/sum);
    printf("Percentual de sapos: %.2f %%\n",(float)(frog*100)/sum);
    return 0;
}
