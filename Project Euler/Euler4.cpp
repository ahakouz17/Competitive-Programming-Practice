/*
 * Project Euler #4: Largest palindrome product
 * 
 * A palindromic number reads the same both ways. 
 * The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 * 
 * Answer: 906609
 * 
 */
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int make_palindrome(int i)
{
    int num = i;
    while (i > 0)
    {
        num = num * 10 + i % 10;
        i = i / 10;
    }
    return num;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool found = false;
        int n, n_pal, max_pal, min_pal, i_pal;
        min_pal = 100001;
        cin >> n;
        n_pal = make_palindrome(n / 1000);
        if (n >= n_pal)
            max_pal = n / 1000;
        else
            max_pal = n / 1000 - 1;
        int factors[2];
        while (!found)
        {
            i_pal = make_palindrome(max_pal);
            for (int i = 999; i > 99; i--)
            {
                if (i_pal / i > 999 || i * i < min_pal)
                    break;
                if (i_pal % i == 0)
                    found = true;
            }
            max_pal--;
        }
        cout << make_palindrome(max_pal + 1) << endl;
    }
    return 0;
}
 