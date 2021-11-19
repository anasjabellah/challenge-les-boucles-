#include<stdio.h>


int main(){

    int age , sex ;

    debut:
    printf("Saisez l age : ");
    scanf("%d", &age);

    printf("Saisez le Sex : \n");
    printf("1. Man\n");
    printf("2. WaMan : ");
    scanf("%d", &sex);


    switch (sex)
    {
    case 1:
            
        if(age > 20){
            printf("Vous devez payer la taxe");
        }else
        {
            printf("Vous devez n est pas payer la taxe");
        }
        break;
    case 2:
       if (age < 20)
        {
            printf("Vous devez payer la taxe");
        }
        else
        {
            printf("Vous devez n est pas payer la taxe");
        }
        break;
    
    default:
        printf("Vous Saise autre Fois");
        goto debut;
        break;
    }

    return 0;

}