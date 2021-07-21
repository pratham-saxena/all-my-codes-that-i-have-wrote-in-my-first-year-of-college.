#include <stdio.h>
#define PI 3.142857
void main() {

    /*q5 - The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.    
    */ 
    char cho , c , r ;
    int length , breadth , areaofrect ;
    float radius , areaofcirc ;

    printf("to find the area of a trianle, press r and for area of circle, press c") ;
    scanf("%c" , &cho ) ;

    if(cho = "r") 
    {
        
        printf("enter the length of rectangle") ;
        scanf("%d" , &length ) ;
        printf("enter the breadth of rectangle") ;
        scanf("%d" , &breadth ) ;

        float a ;

        a = length * breadth ;
        printf("%f area of rectanfle is =" , a) ;
        

    }
    else if(cho = "c")
    {

        printf("enter the radius of the circle") ;
        scanf("%c" , &radius ) ;

        float b ;

        b = PI * radius*radius ;

        printf("%f is the area of circle " , b) ;
    }
}