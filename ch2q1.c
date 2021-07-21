/*Q 1 -- Using conditional operators determine:
(1) Whether the character entered through the keyboard is a
lower case alphabet or not.
(2) Whether a character entered through the keyboard is a
special symbol or not.*/

#include <stdio.h>
void main(){

    char chr ;

    printf("enter a character") ;
    scanf("%c" , &chr) ;

    //using the ascii chart from appendix d to solve this question.

    printf("%d is the value of your character in ascii code" , chr) ;

    
//in the next line, we have used the ascii value of A , i.e 65 and that of z i.e 122 to solve the question

    if(chr>64&&chr<123 ){
        printf("the character you entered is an alphabet") ;

    }
    else if(chr>48&&chr<57){
        printf("the character you have entered is a number") ;
    }

    else{

        printf("the character you have input is a special symbol") ;


    }

    
}