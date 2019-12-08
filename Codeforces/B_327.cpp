// solved: 2014-01-10 14:44:20
#include <iostream>
#include <assert.h>
extern void FillPrimeArray(int *, int);
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    const int rows = 1;
    const int cols = N;
    const int n = rows * cols;
    int table[n];
    FillPrimeArray(table, n);
    for (int i = 0; i < n; i++)
    {
        cout << table[i] << " ";
    }
    return 0;
}

void FillPrimeArray(int *table, int n)
{
    assert(n > 0);
    assert(table != NULL);
    int count = 0;
    table[count++] = 2;
    for (int number = 3; count < n; number++)
    {
        bool prime = true;
        for (int i = 0; number / table[i] >= table[i]; i++)
        {
            if (number % table[i] == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            table[count++] = number;
        }
    }
}