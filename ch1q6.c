//CHECKED FOR BEING CORRECT FROM IDE, THERS SOME PROBLEM WITH VS CODE THAT ITS GIVING THIS ERROR. :(

#include <stdio.h>
int main()
{

    /* Q6--Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/
    int C , D ,E ;
    printf("enter a value for C \n") ;
    scanf("%d " , &C) ;
    printf("enter a value for D \n") ;
    scanf("%d \n" , &D) ;
    
    printf("%d %d are the values of C & D" , C , D) ;

    E = C ; 
    printf("%d is now the value of C \n" , C) ;
    C = D ;
    printf("%d %d are the values of C and E  now \n" , C , E) ;
    D = E ;
    printf("%d is the value of  D \n" , D ) ;


    printf("%d %d are the new values of C and D" , C , D ) ;
    return 0 ;
}
