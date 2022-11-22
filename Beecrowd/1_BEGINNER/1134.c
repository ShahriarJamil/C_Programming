#include<stdio.h>
int main()
{
    int i,alcohol=0,gasoline=0,diesel=0;
    printf("MUITO OBRIGADO\n");
    while(1)
    {
        scanf("%d",&i);
        if(i==4)
        {
            break;
        }

        else if(i==1)
        {
            alcohol+=1;
        }
        else if(i==2)
        {
            gasoline+=1;
        }
        else if(i==3)
        {
            diesel+=1;
        }
    }
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",alcohol,gasoline,diesel);
    return 0;
}
