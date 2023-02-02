#include<stdio.h>
int main()
{
    float n,tax;
    scanf("%f",&n);
    if(n>0 && n<=2000)   printf("Isento\n");
    else if(n>2000 && n<=3000)
    {
        n=n-2000;
        tax=(n*8)/100;
        printf("R$ %.2f\n",tax);
    }
    else if(n>3000 && n<=4500)
    {
        n=n-2000;
        n=n-1000;
        tax=((1000*8)/100)+((n*18)/100);
        printf("R$ %.2f\n",tax);
    }
    else
    {
        n=n-2000;
        n=n-1000;
        n=n-1500;
        tax=((1000*8)/100)+((1500*18)/100)+((n*28)/100);
        printf("R$ %.2f\n",tax);
    }
    return 0;
}
