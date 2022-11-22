#include<stdio.h>
int main()
{
    int note,coin,notes[]= {100,50,20,10,5,2,1},coins[]= {0.50*100,0.25*100,0.10*100,0.05*100,0.01*100};
    scanf("%d.%d",&note,&coin);
    for(int i=0; i<7; i++)
    {
        int numbers_of_note=note/notes[i];
        note=note%notes[i];
        if(i==0)
        {
            printf("NOTAS:\n");
        }
        else if(i==6)
        {
            printf("MOEDAS:\n");
            printf("%d moeda(s) de R$ %d.00\n",numbers_of_note,notes[i]);
            break;
        }
        printf("%d nota(s) de R$ %d.00\n",numbers_of_note,notes[i]);
    }



    for(int i=0; i<5; i++)
    {
        int numbers_of_coin=coin/coins[i];
        coin=coin%coins[i];
        float coins_=coins[i]/100.0;
        printf("%d moeda(s) de R$ %.2f\n",numbers_of_coin,coins_);
    }
    return 0;
}
