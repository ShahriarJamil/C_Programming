#include<stdio.h>
int main()
{
    float student_1,student_2,avarege;
    again_1:
    scanf("%f",&student_1);
    if(student_1<0 || student_1>10)
    {
        printf("nota invalida\n");
        goto again_1;
    }
    again_2:
    scanf("%f",&student_2);
    if(student_2<0 || student_2>10)
    {
        printf("nota invalida\n");
        goto again_2;
    }
    avarege=(student_1+student_2)/2;
    printf("media = %.2f\n",avarege);
    return 0;
}
