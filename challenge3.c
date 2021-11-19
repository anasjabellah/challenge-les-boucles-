#include<stdio.h>
#include <stdbool.h>


int main(){

    int number , conter = 0 ;

    printf("ecrir la number ");
    scanf("%d", &number);


    for (int i = 2 ; i <= number ; i++)
    {
        if(number%i == 0){
            conter = conter + 1 ;
        }
    }

    if (conter == 2)
    {
        printf("est Premier");
    }else{
        printf("est non Premier");
    }
    
    
    return 0 ;
    
}