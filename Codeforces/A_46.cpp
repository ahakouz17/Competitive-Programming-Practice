// solved: 2013-12-24 16:44:09
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int ball = (i * (i + 1) / 2 + 1) % n;
        if (ball == 0)
            ball = n;
        cout << ball << " ";
    }
    return 0;
}