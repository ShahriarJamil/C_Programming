#include <stdio.h>
int main()
{
    int A,B,D,E;
    float C,F;
    scanf("%d %d %f %d %d %f",&A,&B,&C,&D,&E,&F);
    printf("VALOR A PAGAR: R$ %.2f\n",(B*C)+(E*F));
    return 0;
}
