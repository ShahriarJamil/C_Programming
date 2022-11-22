#include <stdio.h>
int main()
{
    char A[20];
    float B,C;
    gets(A);
    scanf("%f %f",&B,&C);
    printf("TOTAL = R$ %.2f\n",B+((15*C)/100));
    return 0;
}
