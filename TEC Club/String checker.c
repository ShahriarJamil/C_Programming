#include<stdio.h>
int main()
{
    int n=10,i,c,lenght;
    printf("The array size is : %d\n",n);
    char arr[n];
    scanf("%s",arr);
    lenght=strlen(arr); //lenght of the array 'arr'

    for(i=0; arr[i]!='\0'; i++) //Compare with ;number' and 'special charecter'
    {
        c=arr[i];
        if((c>=48 && c<=57) || (c==46))//Compare of 'number' and '.'
        {
            if(lenght-1==i)
            {
                printf("Yes");
            }
        }
        else //For 'special charecter'
        {
            printf("No");
            break;
        }
    }
    return 0;
}
