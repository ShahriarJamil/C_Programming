#include<stdio.h>
int main()
{
    float A,B,C;
    scanf("%f%f%f",&A,&B,&C);
    if((A+B)>C && (A+C)>B && (B+C)>A)
    {
        printf("Perimetro = %.1f",A+B+C);
    }
    else
    {
        printf("Area = %.1f",((A+B)/2)*C);
    }
    return 0;
}
