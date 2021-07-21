#include <stdio.h>
void main(){

    /*Q11-- A cashier has currency notes of denominations 10, 50 and
    100. If the amount to be withdrawn is input through the
    keyboard in hundreds, find the total number of currency notes
    of each denomination the cashier will have to give to the
    withdrawer*/

    int amount , a , b , c ;

    printf("enter the amount ") ;
    scanf("%d" , &amount) ;

    a = amount/100 ;
    amount = amount%100 ;
    b = amount/50 ;
    amount = amount%50 ;
    c = amount/10 ;
    amount = amount%10 ;

    printf("%d 100Rs notes %d 50Rs notes %d 10Rs notes " , a , b , c) ;

}