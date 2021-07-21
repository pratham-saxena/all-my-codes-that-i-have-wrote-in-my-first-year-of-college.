#include <stdio.h>
void main(){

    /*Q -- 10 In a town, the percentage of men is 52. The percentage of
    total literacy is 48. If total percentage of literate men is 35 of
    the total population, write a program to find the total number of illiterate
    men and women if the population of the town is 80,000. */


    int no_men , no_women , no_literate_men ,no_literate_women , no_illitrateMmenAndWomen;

    no_men = 80000*0.52 ;
    no_women = 80000 - no_men ;
    no_literate_men = 80000*0.35 ;
    no_literate_women = (80000*0.48) - (80000*0.35) ;
    
    no_illitrateMmenAndWomen = (no_men-no_literate_men) + (no_women - no_literate_women) ; 



    printf("the total no. of illiterate men and women is %d \n " , no_illitrateMmenAndWomen ) ;



}