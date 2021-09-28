#include <stdio.h>

int main(){
    int i;
    int intervalMax = 1000;
    int sum = 0;
    for (i = 1; i < intervalMax; i++) {
        if ((i % 3 == 0) || (i % 5 ==0)){
            sum += i;
        }
    };
    printf("The sum of all multiples of 3 or 5 below %d are equal to %d\n", intervalMax, sum);
    return 0;
}
