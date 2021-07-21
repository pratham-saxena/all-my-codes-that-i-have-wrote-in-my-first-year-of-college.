#include<stdio.h>
#include<conio.h>

/*use insights from rough and rough 2 for the logic gotta go somewhere right now !
If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
(Hint: Use the modulus operator ‘%’)
*/ 

void main(){

    int a , b ,c ,d ,e ,f , g ;

    printf("enter a 5 digit number") ;
    scanf("%d" , &a ) ;

    b = a%10 ;
    //last number of the digit comes out
    a = a/10 ;
    //the digits are reduced to 4
    c = a%10 ;
    a = a/10 ;
    d = a%10 ;
    a = a/10 ;
    e = a%10 ;
    a = a/10 ;
    f = a%10 ; 
    g = b+c+d+e+f ;

    printf("%d is the sum of its digits \n" , g) ;

//Q--8 Also here ,If a five-digit number is input through the keyboard, write a
//program to reverse the number., As they are similar.

    //using the integers b,c,d,e,f from q 7
    //reversed digits are as follows

    printf("%d%d%d%d%d is the number print in reverse order \n" , b,c,d,e,f ) ; 

    /*Q9 -- Can also be solved similarly If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number .*/

    printf("%d%d are the first and last digits of a 4 digit number \n" , b,e ) ;
    int h;
    h = b+e ;
    printf("%d is the sum of these digits" , h );
    //here, the variable f will be removed and a 4 digit number will be asked

    /*Q--13 If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402.*/

    printf("the output is %d%d%d%d%d " ,f+1 , e+1 , d+1 , c+1 , b+1 ) ;
    //as the digits in b,c,d,e,f are from lacs to ones digit , so, f,e,d,c,b
    


}