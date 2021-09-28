#include <stdio.h>

int main(){
    int limit = 100;
    int sum_square = 0;
    int square_sum = 0;
    int i;
    for (i = 1; i < limit + 1; i++){
        sum_square += i * i;
        square_sum += i;
    }
    square_sum = square_sum * square_sum;
    printf("the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is %d\n", square_sum - sum_square);
    return 0;
}
