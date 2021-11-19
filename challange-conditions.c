#include <stdio.h>
#include <string.h>

int main()
{
    char sex[10];

    int age ;


    printf("Saisez le Sex : ");
    scanf("%s",sex);

    printf("Saisez l age : ");
    scanf("%d", &age);


    if (strcmp(sex, "homme") == 0)
    {
        if ( age >= 20)
        {
            printf("Vous devez payer la taxe");
        }else{
            printf("Vous devez n est pas payer la taxe");
        }
        
    }
    else if (strcmp(sex, "femme ") == 0)
    {
        if ( age >= 18 && age <= 38)
        {
            printf("Vous devez payer la taxe");
        }else{
            printf("Vous devez n est pas payer la taxe");
        }
    }else{
        printf("Vous devez n est pas payer la taxe");
    }


    return 0;
}