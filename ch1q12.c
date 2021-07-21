#include <stdio.h>
int main(){

    /*Q12 --If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item.*/

    int sp , cp , profit ;
    
    printf("enter the total selling price of all the 15 items ") ;
    scanf("%d" , &sp ) ;
    printf("Enter the total profit on all the 15 items ") ;
    scanf("%d" , &profit ) ;

    cp = sp - profit ; 

    printf("Cost Price of all 15 items is %d" , cp ) ;
    printf("cost price of an item %d " , cp/15 ) ;
    return 0 ;
}