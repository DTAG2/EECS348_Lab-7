#include <stdio.h>
#include "temperature.h"

int main(int argc, char *argv[]) {
    float temp_in, conv_temp, to_cel;
    int scale, target_scale;

    printf("Enter temperature value: ");
    if (scanf("%f", &temp_in) != 1) {
        printf("Invalid input, please enter a number.\n");
        while(1){
            printf("\nEnter temperature value: ");
            if (scanf("%f", &temp_in) != 1) {
                printf("Invalid input, please enter a number.\n");
            }else{
                break;
            }
        }
    }
    
    printf("\nScales\n1 - Celsius\n2 - Fahrenheit\n3 - Kelvin\n\nSelect the input scale (1, 2, 3): ");
    if (scanf("%d", &scale) != 1 || scale < 1 || scale > 3) {
        printf("Invalid scale\n");
        while(1){
            printf("\nSelect the input scale (1, 2, 3): ");
            if (scanf("%d", &scale) != 1 || scale < 1 || scale > 3) {
                printf("Invalid scale\n");
            }else{
                break;
            }
        }
    }
    
    printf("Select the target scale (1, 2, 3): ");
    if (scanf("%d", &target_scale) != 1 || target_scale < 1 || target_scale > 3) {
        printf("Invalid scale\n");
        while(1){
            printf("\nSelect the target scale (1, 2, 3): ");
            if (scanf("%d", &target_scale) != 1 || target_scale < 1 || target_scale > 3) {
                printf("Invalid scale\n");
            }else{
                break;
            }
        }
    }
    
    if (scale == 3 && temp_in < 0) {
        printf("Error: Kelvin cannot be negative.\n");
        return 1;
    }
    
    if (scale == target_scale) {
        printf("No conversion needed. Temperature remains: %.2f\n", temp_in);
        return 0;
    }

    if (scale == 1){
        if (target_scale == 2){
            conv_temp = celsius_to_fahrenheit(temp_in);
        }else{
            conv_temp = celsius_to_kelvin(temp_in);
        }
    }

    if (scale == 2){
        if (target_scale == 1){
            conv_temp = fahrenheit_to_celsius(temp_in);
        }else{
            conv_temp = fahrenheit_to_kelvin(temp_in);
        }
    }

    if (scale == 3){
        if (target_scale == 1){
            conv_temp = kelvin_to_celsius(temp_in);
        }else{
            conv_temp = kelvin_to_fahrenheit(temp_in);
        }
    }

    printf("\nConverted Temperature: %.2f\n", conv_temp);
    to_cel = conv_temp;
    if (target_scale == 2){
        to_cel = fahrenheit_to_celsius(conv_temp);
    }
    if (target_scale == 3){
        to_cel = kelvin_to_celsius(conv_temp);
    }

    categorize_temperature(to_cel);
    
    return 0;
}
