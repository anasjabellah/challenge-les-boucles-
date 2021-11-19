#include <stdio.h>
#include <stdbool.h>


int main(){

    int nomber  ;

    int estBremier  =  0 ;

    printf("ecrir un nomber");
    scanf("%d", &nomber);

    for (int  i = nomber ; i >= 2; i-- )
    {
        for (int i = 1 ; i < nomber ; i++){

            if(nomber%i == 0){
                estBremier++ ; 
            }
           
        }


        if (estBremier == 2)
        {
            printf("%d \n",nomber);
        }

        estBremier = 0 ;
        nomber = nomber - 1 ;
        
    }

    return 0 ;
}