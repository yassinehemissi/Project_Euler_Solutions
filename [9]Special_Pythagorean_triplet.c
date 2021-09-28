#include <stdio.h>

int main(){
    int a, b, c;
    int target = 1000;
    for (int a = 0; a < target; a++){
        for (int b = 0; b < target; b++){
            for (int c = 0; c < target; c++){
                if (a * b * c != 0){
                    if ((a + b + c == target) && ((a * a) + (b * b) == (c * c) )){
                        printf("the product abc is %d\n", a * b * c);
                        return 0;
                    }
                }
            }
        }

    }
    return 0;
}
