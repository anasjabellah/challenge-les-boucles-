#include<stdio.h>


int main(){

    int number ;

    printf("ecrir la number ");
    scanf("%d", &number);


    if(number <= 0 && number > 10){
        printf("Ecrire un number 0 && 10");
    }else{
        for (int  i = 1 ; i <= 10 ; i++){
            int result = i * number ;
            printf("%d x %d = %d  \n", i ,number , result);
        }
    }


    return 0;

    
}