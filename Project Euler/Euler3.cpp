/*
 * Project Euler #3: Largest prime factor:
 * 
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 * 
 */
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long int N, factor = 0, counter = 2, N_const;
        cin >> N;
        N_const = N;
        while (counter * counter <= N_const) {
            if (N % counter == 0) {
                factor = counter;
                N = N / counter;
            } else {
                counter = (counter == 2) ? 3 : counter + 2;
            }
        }
        if (factor < N)
            factor = N;
        cout << factor << endl;
    }
    return 0;
}
