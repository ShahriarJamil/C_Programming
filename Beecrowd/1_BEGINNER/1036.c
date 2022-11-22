#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float b_2,_4ac,_2a,sub_under_root,root,sum,sub,devide,R1,R2;
    scanf("%f%f%f",&a,&b,&c);
    b_2=b*b;
    _4ac=4*a*c;
    sub_under_root=(b_2-_4ac);
    _2a=2*a;
    if(sub_under_root>0 && _2a>0)
    {
        root=sqrt(sub_under_root);
        sum=-b+root;
        sub=-b-root;
        R1=sum/_2a;
        R2=sub/_2a;
        printf("R1 = %.5f\n",R1);
        printf("R1 = %.5f\n",R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }


    return 0;
}
