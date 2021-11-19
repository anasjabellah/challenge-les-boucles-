#include<stdio.h>
#include<stdlib.h>
int main()
{
    int result,a,b;
    printf("Donner un entier positif: ");
    scanf("%d",&a);
    b=0;
        while(a>0)
        {
            result =a%10;
            b=10*b+result ;
            a=a/10;
        }
    printf("l'inverse de l'entier donne en entree est %d\n",b);
    return 0;
}