#include <stdio.h>
#include "football.h"

int count_combinations(int points){ //same logic as print combinations, just tracks amount of combinations
    int count = 0; //start with count of 0
    for (int td2 = 0; td2 * 8 <= points; td2++) { //for loop for Touchdown + 2pt conversion
        for (int td1 = 0; td1 * 7 + td2 * 8 <= points; td1++) { // Touchdown + FG
            for (int td = 0; td * 6 + td1 * 7 + td2 * 8 <= points; td++) { // Touchdown only
                for (int fg = 0; fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= points; fg++) { // Field goal
                    for (int safety = 0; safety * 2 + fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= points; safety++) { // Safety
                        if (safety * 2 + fg * 3 + td * 6 + td1 * 7 + td2 * 8 == points) { //if this combination is eqaul to the amount of points
                            count++; //increment count
                        }
                    }
                }
            }
        }
    }
    return count;
}

void print_combinations(int points){
    printf("\nPossible combinations of scoring plays if a team’s score is: %d\n\n", points); //print the amount of points
    for (int td2 = 0; td2 * 8 <= points; td2++) { // Touchdown + 2pt conversion
        for (int td1 = 0; td1 * 7 + td2 * 8 <= points; td1++) { // Touchdown + FG
            for (int td = 0; td * 6 + td1 * 7 + td2 * 8 <= points; td++) { // Touchdown only
                for (int fg = 0; fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= points; fg++) { // Field goal
                    for (int safety = 0; safety * 2 + fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= points; safety++) { // Safety
                        if (safety * 2 + fg * 3 + td * 6 + td1 * 7 + td2 * 8 == points) { //if this combination is eqaul to the amount of points
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td2, td1, td, fg, safety); //print the scoring combination of each type
                        }
                    }
                }
            }
        }
    }
}
