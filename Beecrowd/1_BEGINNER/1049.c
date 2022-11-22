#include <stdio.h>
#include <string.h>

int main()
{
    char root[15], node[15], leaf[15];
    scanf("%s%s%s", &root, &node, &leaf);

    if ((strcmp(root, "vertebrado") == 0) && (strcmp(node, "ave") == 0) && (strcmp(leaf, "carnivoro") == 0))
    {
        printf("aguia\n");
    }
    else if ((strcmp(root, "vertebrado") == 0) && (strcmp(node, "ave") == 0) && (strcmp(leaf, "onivoro") == 0))
    {
        printf("pomba\n");
    }
    else if ((strcmp(root, "vertebrado") == 0) && (strcmp(node, "mamifero") == 0) && (strcmp(leaf, "onivoro") == 0))
    {
        printf("homem\n");
    }
    else if ((strcmp(root, "invertebrado") == 0) && (strcmp(node, "inseto") == 0) && (strcmp(leaf, "hematofago") == 0))
    {
        printf("pulga\n");
    }
    else if ((strcmp(root, "invertebrado") == 0) && (strcmp(node, "inseto") == 0) && (strcmp(leaf, "herbivoro") == 0))
    {
        printf("lagarta\n");
    }
    else if ((strcmp(root, "invertebrado") == 0) && (strcmp(node, "anelideo") == 0) && (strcmp(leaf, "hematofago") == 0))
    {
        printf("sanguessuga\n");
    }
    else if ((strcmp(root, "invertebrado") == 0) && (strcmp(node, "anelideo") == 0) && (strcmp(leaf, "onivoro") == 0))
    {
        printf("minhoca\n");
    }
    else
    {
        printf("vaca\n");
    }

    return 0;
}
