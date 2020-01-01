/*
 * Project Euler #21: Amicable numbers
 *
 * Let d(n) be defined as the sum of proper divisors of n
 * (numbers less than n which divide evenly into n).
 * If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair
 * and each of a and b are called amicable numbers.
 *
 * For example, the proper divisors of 220 are 1,2,4,5,10,11,20,22,44,55 and 110;
 * therefore d(220) = 284. The proper divisors of 284 are 1,2,4,71 and 142;
 * so d(284) = 220.
 *
 * Evaluate the sum of all the amicable numbers under 10000.
 *
 * Answer: 31626
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int UPPERLIMIT = 305000;
const int UPPERN = 100005;
int sieve[UPPERLIMIT];
void sumProprtDivisorsSeive() {
    for(int i = 0; i < UPPERLIMIT; i++) sieve[i] = 1;

    for (int i = 2; i < UPPERLIMIT; i++) {
        int j = i*2;
        while(j < UPPERLIMIT){
            sieve[j] += i;
            j += i;
        }
    }
}

int main(){
    int t, n;
    scanf("%d", &t);
    sumProprtDivisorsSeive();
    // find amicable numbers under 10^5
    vector<int> amicableNumbers;
    long long int amicableSum = 0;
    for(int i = 1; i < 100000; i++){
        if(sieve[i] > i && sieve[sieve[i]] == i){
            amicableNumbers.push_back(i);
            if(sieve[i] <= 100000)
                amicableNumbers.push_back(sieve[i]);
            //amicableSum += i;
            //if(sieve[i] < 10000){amicableSum+= sieve[i];}
        }
    }
    sort(amicableNumbers.begin(), amicableNumbers.end());
    //cout << amicableSum<<endl;
    while(t--){
        scanf("%d", &n);
        amicableSum = 0;
        int index = 0;
        while(index < amicableNumbers.size() && amicableNumbers[index] < n){
            amicableSum +=  amicableNumbers[index++];
        }
        cout << amicableSum << endl;
    }
    return 0;
}
