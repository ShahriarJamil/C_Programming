#include<stdio.h>
int main()
{
    float salary,moneyEarned;
    scanf("%f",&salary);
    if(salary>0 && salary<=400.00)
    {
        moneyEarned=salary*15/100;
        printf("Novo salario: %.2f\n",(salary+moneyEarned));
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: 15 %%\n");
    }
    else if(salary>400.00 && salary<=800.00)
    {
        moneyEarned=salary*12/100;
        printf("Novo salario: %.2f\n",(salary+moneyEarned));
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: 12%%\n");
    }
    else if(salary>800.00 && salary<=1200.00)
    {
        moneyEarned=salary*10/100;
        printf("Novo salario: %.2f\n",(salary+moneyEarned));
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: 10%%\n");
    }
    else if(salary>1200.00 && salary<=2000.00)
    {
        moneyEarned=salary*7/100;
        printf("Novo salario: %.2f\n",(salary+moneyEarned));
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: 7%%\n");
    }
    else
    {
        moneyEarned=salary*4/100;
        printf("Novo salario: %.2f\n",(salary+moneyEarned));
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: 4%%\n");
    }
    return 0;
}

