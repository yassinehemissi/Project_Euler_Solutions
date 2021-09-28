#include <stdio.h>

int check_if_prime(long long int possiblePrime, long long int primes[], int primes_count){
    int result = 1;
    int i = 0;
    while (i < primes_count){
         if ( possiblePrime % primes[i] == 0) {
            result = 0;
            i = primes_count;
        }
        i += 1;
    }
    return result;
}

int move_to_next_prime(long long int primes[], int primes_count){
    int i = primes[primes_count - 1];
    int isPrime = 0;
    while (isPrime == 0){
        i += 1;
        isPrime = check_if_prime(i, primes, primes_count);
    }
    return i;
}

int main(){
    long long int number = 600851475143;
    printf("The largest prime factor of the number %lld ", number);
    long long int primes[50000];
    int primes_count = 1;
    primes[0] = 2;
    while (number > 1) {
        if ( number % primes[primes_count - 1] != 0 ) {
                primes[primes_count] = move_to_next_prime(primes, primes_count);
                primes_count += 1;
        } else {
                number = number / primes[primes_count - 1];
        }
    }
    printf("is %lld\n", primes[primes_count - 1]);
    return 0;
}
