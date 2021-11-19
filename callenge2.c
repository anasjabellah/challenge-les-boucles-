#include<stdio.h>


int main(){ 

    int number ;


    printf("ecrir la number ");
    scanf("%d", &number);


    for (int row = 0; row <= number; row++)
    {

        for (int space = number ; space >= row ; space--)
        {
            printf(" ");
        }

        for (int col = 1 ; col <= row + row - 1 ; col++)
        {    
            printf("*");
        }
  
        printf("\n");
    }
    
    return 0 ;
    
}