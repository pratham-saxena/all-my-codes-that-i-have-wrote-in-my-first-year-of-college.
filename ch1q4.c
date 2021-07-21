#include <stdio.h>
int main(){

    //question4
    /*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees. */

    float tempinf , a , b ;

    printf("enter the temperature in degree fahrenheit") ;
    scanf("%f" , &tempinf ) ;

    //a is the temperature in degree celsius 
    //c = (f - 32 )5/9

    a = (tempinf - 32 )*5/9 ;

    printf("%f degree celsius is the temperature" , a) ;

    return 0;

}