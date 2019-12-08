#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <memory.h>
using namespace std;
const int N = 1000009;
bool prime[N];
int p1, p2;
void Primes(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * 2; j < n; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
void part(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == false && prime[n - i] == false)
        {
            p1 = i, p2 = n - i;
            return;
        }
    }
}
int main()
{
    memset(prime, true, N);
    int n;
    cin >> n;
    Primes(n);
    part(n);
    cout << p1 << " " << p2;
    return 0;
}