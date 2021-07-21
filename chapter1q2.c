#include <stdio.h>
int main(){

    //question 2 of chapter 1
    /*The distance between two cities (in KM.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters.*/
    int dist ;
    float inft ;
    float ininches ;
    float inCMs ;
    float inmiles ;
    int choice ;
    printf("enter the distance between the two cities in kilometers (KM)") ;
    scanf("%d" , &dist) ;

    printf("In which unit do you want the distance to be , ( press 1 for ft,2 for inches 3 for CMs and 4 for miles ?") ;
    scanf("%d" , &choice) ;

    switch(choice)
    {

        case 1:
            inft = dist * 3000 ;
            printf("%f" , inft ) ;
            printf("\n");
            break ;
            
        case 2 :
            ininches = dist * 36000 ; 
            printf("%f" , ininches ) ;
            printf("\n");
            break ;
        case 3 :
            inCMs = dist * 10000 ; 
            printf("%f" , inCMs) ;
            printf("\n") ;
            break ;
        case 4 :
            inmiles = dist * 0.5828335 ;
            printf("%f \n" , inmiles ) ;
            break;
        default :
            printf("enter a valid value for unit") ;
    }



}