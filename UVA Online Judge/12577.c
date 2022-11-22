#include<stdio.h>
int main()
{
    char input[15];
    int Case=1;
    while(1)
    {
        gets(input);
        if(strcmp(input,"*")==0)
        {
            break;
        }
        else if(strcmp(input,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",Case);
            Case++;
        }
        else if(strcmp(input,"Umrah")==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",Case);
            Case++;
        }
    }
    return 0;
}
