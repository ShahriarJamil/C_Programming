#include<stdio.h>
int main()
{
    double A,B;
    scanf("%lf",&A);
    scanf("%lf",&B);
    double sum=(A*3.5)+(B*7.5);
    double average=sum/(3.5+7.5);
    printf("MEDIA = %.5lf\n",average);
    return 0;
}
