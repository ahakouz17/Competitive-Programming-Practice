/*
 * Project Euler #27: Quadratic primes
 *
 * Euler discovered the remarkable quadratic formula:
 * n^2+n+41
 *
 * It turns out that the formula will produce 40 primes for the consecutive integer values 0≤n≤39
 *
 * However, when n=40,40^2+40+41=40(40+1)+41 is divisible by 41,
 * and certainly when n=41,41^2+41+41 is clearly divisible by 41.
 *
 * The incredible formula n^2−79n+1601 was discovered, which produces 80 primes for the consecutive values 0≤n≤79.
 * The product of the coefficients, −79 and 1601, is −126479.
 *
 * Considering quadratics of the form:
 *      n^2+an+b, where |a|<1000 and |b|≤1000
 *      where |n| is the modulus/absolute value of n
 *      e.g. |11|=11 and |−4|=4
 *
 * Find the product of the coefficients, a and b, for the quadratic expression that produces the maximum number
 * of primes for consecutive values of n, starting with n=0.
 *
 * Answer:
 *
 */
#include <iostream>
#include <vector>
using namespace std;
const int UPPERLIMIT = 5000005;
bool sieve[UPPERLIMIT];

vector<int> findPrimesSeive(int upper_limit) {
    for(int i = 0; i < upper_limit; i++) sieve[i] = true;
    vector<int> primes;
    for (int i = 2; i < upper_limit; i++) {
        if(sieve[i]){
            primes.push_back(i);
            int j = i*2;
            while(j < upper_limit){
                sieve[j] = false;
                j += i;
            }
        }

    }
    return primes;
}

int countConsecPrimes(int a, int b){
    int i = 0, tempMax = 0;
    while(1){
        if(sieve[i*i + a*i + b]){
            tempMax++;
            i++;
        } else{
            return i - 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    int maxLength = 0, tempMax, max_a, max_b;
    vector<int> primes = findPrimesSeive(UPPERLIMIT);
    for(int a = 1; a <= n; a+=2){

        for(int j = 0; j < primes.size(); j++){
            int b = primes[j];
            if(b > n) continue;
            tempMax = countConsecPrimes(a, b);
            if(tempMax > maxLength){
                maxLength = tempMax;
                max_a = a;
                max_b = b;
            }
            tempMax = countConsecPrimes(-a, b);
            if(tempMax > maxLength){
                maxLength = tempMax;
                max_a = -a;
                max_b = b;
            }
            tempMax = countConsecPrimes(a, -b);
            if(tempMax > maxLength){
                maxLength = tempMax;
                max_a = a;
                max_b = -b;
            }
            tempMax = countConsecPrimes(-a, -b);
            if(tempMax > maxLength){
                maxLength = tempMax;
                max_a = -a;
                max_b = -b;
            }
        }
    }
    cout << max_a << " " << max_b << endl;

    return 0;
}

