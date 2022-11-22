#include<stdio.h>
int main()
{
    char input[15];
    int Case=1;
    while(1)
    {
        int count=0;
        gets(input);
        if(strcmp(input,"#")==0)
        {
            break;
        }
        else if(strcmp(input,"HELLO")==0)
        {
            printf("Case %d: ENGLISH\n",Case);
            ++count;
        }
        else if(strcmp(input,"HOLA")==0)
        {
            printf("Case %d: SPANISH\n",Case);
            ++count;
        }
        else if(strcmp(input,"HALLO")==0)
        {
            printf("Case %d: GERMAN\n",Case);
            ++count;
        }
        else if(strcmp(input,"BONJOUR")==0)
        {
            printf("Case %d: FRENCH\n",Case);
            ++count;
        }
        else if(strcmp(input,"CIAO")==0)
        {
            printf("Case %d: ITALIAN\n",Case);
            ++count;
        }
        else if(strcmp(input,"ZDRAVSTVUJTE")==0)
        {
            printf("Case %d: RUSSIAN\n",Case);
            ++count;
        }
        else if(count==0)
        {
            printf("Case %d: UNKNOWN\n",Case);
            ++count;
        }
        Case++;
    }
    return 0;
}
