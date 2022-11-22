#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    double sum=(A*2)+(B*3)+(C*5);
    double average=sum/(2+3+5);
    printf("MEDIA = %.1lf\n",average);
    return 0;
}

