#include <stdio.h>


int main(){

    int nomber , max = 0 , somme = 0 , nomberTest ;

    printf("Ecrire un nomber : ");
    scanf("%d", &nomber );


    max = nomber ;
    somme = nomber ; 


    do
    {
    
    nomberTest = 0;
    printf("Ecrivez le numero 1 si vous voulez continuer :  \n");
    printf("Ecrivez le numero 0 si vous voulez arrêter   \n");
    scanf("%d", &nomberTest );


    if (nomberTest == 1 )
    {
        printf("Ecris un nombre entre 0 et 100 ");
        scanf("%d", &nomber );

        if (nomber < 100 && nomber > 0 )
        {
            if (nomber > max)
            {
            max = nomber ;
            }

            somme +=  nomber ;
        }else{
            printf("Ecris un nombre entre 0 et 100  : ");
        }
        

    }else
    {
        nomberTest = 0 ;
    }


    } while(nomberTest == 1);
 
    printf("la nomber max : %d \n", max);
    printf("la nomber somme : %d \n", somme);

    
    

    

    return 0 ;
}