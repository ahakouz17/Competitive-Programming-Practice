// https://codeforces.com/contest/282/problem/A
// solved: Aug/24/2013
#include <iostream>
using namespace std;
int main()
{
    int n, x = 0;
    char trash, sign;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> trash >> sign >> trash;
        if (sign == '-')
            x--;
        else if (sign == '+')
            x++;
    }
    cout << x << endl;
    return 0;
}