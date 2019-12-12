/*
 * Project Euler #10: Summation of primes
 * 
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.
 * 
 * Answer:142913828922
 */

#include <iostream>
using namespace std;
int MAX_N = 2000010;
bool is_prime[2000010];
long int acc_sum[2000010];


void Sieve_of_Eratosthenes(){
    int p;
    long int sum = 0;
    for(int i = 2; i <= MAX_N; i++){
        is_prime[i] = true;
    }
    for(int i = 2; i <= MAX_N; i++){
        while(!is_prime[i] && i < MAX_N) acc_sum[i++] = sum;
        sum += i;
        acc_sum[i] = sum;
        p = i*2;
        while(p <= MAX_N){
            is_prime[p] = false;
            p += i;
        }
    }
}

int main(){
    Sieve_of_Eratosthenes();
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        printf("%ld\n", acc_sum[n]);
    }

    
    return 0;
}