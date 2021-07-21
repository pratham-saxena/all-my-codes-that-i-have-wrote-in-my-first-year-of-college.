/*Q2 -- Write a program using conditional operators to determine
whether a year entered through the keyboard is a leap year or
not.*/

#include <stdio.h>
void main(){

    int year ;

    printf("enter an year to check if it is prime or not") ;
    scanf("%d" , &year) ;

    if(year%4==0&&year%400==100&&year%100!=0){

        printf("leap year");
    }
    else{
        printf("not a leap year") ;
    } 
}