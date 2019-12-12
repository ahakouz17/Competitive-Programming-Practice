/*
 * Project Euler #1: Multiples of 3 and 5:
 * 
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
 * The sum of these multiples is 23.
 * 
 * Find the sum of all the multiples of 3 or 5 below 1000. (or n in general)
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n_cases;
    cin >> n_cases;
    long long int N, N3, N5, N15, sum;
    for (int i = 0; i < n_cases; i++)
    {
        cin >> N;
        N--;
        N3 = ((N/3)*(N/3) + (N/3))/2;
        N5 = ((N/5)*(N/5) + (N/5))/2;
        N15 = ((N/15)*(N/15) + (N/15))/2;
        sum = N3*3 + N5*5 - N15*15;
        cout<<sum<<endl;
        
    }
    return 0;
}