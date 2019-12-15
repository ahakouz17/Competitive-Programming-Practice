/*
 * Project Euler #23: Non-abundant sums
 * 
 * A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. 
 * For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 
 * 28 is a perfect number.
 * 
 * A number n is called deficient if the sum of its proper divisors is less than n and it is called 
 * abundant if this sum exceeds n.
 * 
 * As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as
 * the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater
 * than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced
 * any further by analysis even though it is known that the greatest number that cannot be expressed as the 
 * sum of two abundant numbers is less than this limit.
 * Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.
 *
 * Answer: 4179871
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler023/problem
 */

#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;

const int UPPERLIMIT = 28130;
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

int main() {
    int t, n;
    cin >> t;
    vector<int> abundantNums;
    bool abundant[28130];
    sumProprtDivisorsSeive();
    for(int i = 12; i <= 28123; i++){
        if (sieve[i] > i){
            abundantNums.push_back(i);
            abundant[i] = true;
        }else {
            abundant[i] = false;
        }
    }
    sort(abundantNums.begin(), abundantNums.end());
    /* FOR Project Euler Problem ****************************
    long long int summ =0;
    bool afound = false;
    for(int i = 1; i < 28123; i++){
        for(int j = 0; j < abundantNums.size(); j++){
            if(abundantNums[j] > i){
                summ += i;
                afound = true;
                break;
            }
            if (abundant[i - abundantNums[j]]){
                afound = true;
                break;
            }
        }
        if (! afound) {
            summ += i;
        }
    }
    cout << summ << endl;
    **********************************************************/
    while(t--){
        cin >> n;
        if (n < 24){
            cout << "NO" << endl;
            continue;
        } else if(n >= 28123){
            cout << "YES" << endl;
            continue;
        }
        bool found = false;
        for(int i = 0; i < abundantNums.size(); i++){
            if(abundantNums[i] > n){
                cout << "NO" << endl;
                found = true;
                break;
            }
            if (abundant[n - abundantNums[i]]){
                cout << "YES" << endl;
                found = true;
                break;
            }
        }
        if (! found) {
            cout << "NO" << endl;
            continue;
        }
    }

    return 0;
}   