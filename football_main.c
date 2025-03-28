#include <stdio.h>
#include "football.h"

int main(int argc, char *argv[]) {

    int points;

    while(1){ //loop indefinetly
    printf("Enter 0 or 1 to STOP\n"); 
    printf("Enter the NFL score: "); //get user input
    scanf("%d", &points); //obtain the user input
    if (points < 2){ //if the score is less the 2 
        break; //break the loop
    }
    print_combinations(points); //print the cominations of scoring
    }
    return 0;
}
