#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,exam_score;
    double average1,average2;

    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);

    average1=((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;

    printf("Media: %.1lf\n",average1);

    if(average1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }

    else if(average1<5.0)
    {
        printf("Aluno reprovado.\n");
    }

    else
    {
        printf("Aluno em exame.\n");
        scanf("%f",&exam_score);
        printf("Nota do exame: %.1f\n",exam_score);

        average2=(exam_score+average1)/2;

        if(average2>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",average2);
    }
    return 0;
}

