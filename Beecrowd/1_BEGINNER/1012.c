#include <stdio.h>
int main()
{
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",.5*A*C,3.14159*C*C,.5*C*(A+B),B*B,A*B);
    return 0;
}
