#include <stdlib.h>
#include <stdio.h>

void HQ(int numbers[6]){
    int i = 1;

    read_six_numbers(numbers);

    if(numbers[0] < 0){
        bad_instructions();
    }
    while(i != 6){
        if(numbers[i] != (numbers[i - 1] + i)){ // 1 2 4 7 11 16
            bad_instructions();
        }
        i++;
    }
    // else print valid message
}
