/*
 * Project Euler #7: 10001st prime
 * 
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
 * we can see that the 6th prime is 13.
 * 
 * What is the 10001st prime number?
 * 
 * Answer:  104743
 */
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

vector<long long int> primes;
long long int max_value = 900000;

int main()
{
    int t, maxi = 0;
    cin >> t;
    vector<int> n(t);
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        maxi = max(maxi, n[i]);
    }

    vector<bool> isPrime(max_value);
    for (long long int i = 0; i < max_value; i++)
        isPrime[i] = true;
    int N = 2;
    while (true)
    {
        if (isPrime[N])
        {
            if (primes.size() >= maxi)
                break;
            primes.push_back(N);
            for (long long int j = N + N; j < max_value; j += N)
                isPrime[j] = false;
            if (N >= max_value)
                break;
        }
        N++;
    }
    for (int i = 0; i < n.size(); i++)
        cout << primes[n[i] - 1] << endl;

    return 0;
}
