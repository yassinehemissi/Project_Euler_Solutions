#include <stdio.h>

int main(){
    int limit = 4000000;
    int first_last_term = 1;
    int second_last_term = 2;
    int sum = 2;
    int newTerm;

    while (second_last_term < limit) {
        newTerm = first_last_term + second_last_term;
        first_last_term = second_last_term;
        second_last_term = newTerm;
        if (newTerm % 2 == 0) {
            sum += newTerm;
        }
    }

    printf("Sum of the even-valued term: %d\n", sum);

    return 0;
}
