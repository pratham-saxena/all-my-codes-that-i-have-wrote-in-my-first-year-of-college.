#include <stdio.h>
int main(){

    //let us c book exercises
    /* Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary. */
    
    int totsal ;
    //when i use float for totsal, the code gives wrong results ????? WHY?
    int bsal ;
    float da ;
    float hra ;

    printf("enter your basic salary") ;
    scanf("%d" , &bsal) ;
    
    da = bsal * 0.4 ;
    hra = bsal * 0.2 ;

    totsal = bsal + da + hra ;

    printf("your total salary is %d including all the allowances" , totsal) ;





    
}