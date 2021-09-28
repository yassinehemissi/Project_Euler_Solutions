#include <stdio.h>

int check_if_prime(int possible_prime, long long int primes[], int primes_count){
    int i;
    for (i = 0; i < primes_count; i++){
        if (possible_prime % primes[i] == 0){
            return 0;
        }
    }
    return 1;
}

long long int find_next_prime(long long int primes[], int primes_count){
    int possible_prime = primes[primes_count - 1] + 1;
    while (check_if_prime(possible_prime, primes, primes_count) == 0){
        possible_prime += 1;
    }
    return possible_prime;
}

int main(){
    int target_prime_index = 10001;
    long long int primes[target_prime_index];
    int primes_count = 1;
    primes[0] = 2;
    while (primes_count < target_prime_index){
        primes[primes_count] = find_next_prime(primes, primes_count);
        primes_count += 1;
    }
    printf("The %d th prime number is %lld", target_prime_index, primes[primes_count - 1]);
    return 0;
}
