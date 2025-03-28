#include <stdio.h>
#include "football.h"

int main(int argc, char *argv[]) {

    int points;

    while(1){
    printf("Enter 0 or 1 to STOP\n");
    printf("Enter the NFL score: ");
    scanf("%d", &points);
    if (points < 2){
        break;
    }
    print_combinations(points);
    }
    return 0;
}