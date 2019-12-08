// https://codeforces.com/contest/231/problem/A
// solved: Aug/24/2013
#include <iostream>
using namespace std;
int main()
{
    int n;
    int *P;
    int *V;
    int *T;
    cin >> n;
    P = new int[n];
    V = new int[n];
    T = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> P[i] >> V[i] >> T[i];
    }
    int sp = 0;
    for (int i = 0; i < n; i++)
    {
        if ((P[i] && V[i]) || (P[i] && T[i]) || (V[i] && T[i]))
            sp++;
    }

    cout << sp << endl;

    return 0;
}