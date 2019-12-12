/*
 * Project Euler #5: Smallest multiple
 * 
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 * 
 * Answer: 232792560
 */
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <memory.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int constant;
        cin >> constant;
        bool isPrime[41] = {true};
        int counter = 2;
        vector<int> primes;
        vector<int> multiples;
        for (int i = 0; i <= constant; i++)
            isPrime[i] = true;
        while (counter <= constant)
        {
            if (isPrime[counter])
            {
                primes.push_back(counter);
                multiples.push_back(1);
                for (int i = 2 * counter; i <= constant; i += counter)
                    isPrime[i] = false;
            }
            counter += (counter % 2 == 0) ? 1 : 2;
        }

        int n = constant + 1;
        long long int m = 1;
        for (int num = 2; num < n; num++)
        {
            int num_temp = num;
            for (int i = 0; i < primes.size() && primes[i] * primes[i] <= num; i++)
            {
                int c = 0;
                while (num_temp % primes[i] == 0)
                {
                    c++;
                    num_temp = num_temp / primes[i];
                    if (c > multiples[i])
                        multiples[i] = c;
                }
            }
        }

        for (int i = 0; i < multiples.size(); i++)
            while (multiples[i]--)
                m *= primes[i];
        cout << m << endl;
    }
    return 0;
}