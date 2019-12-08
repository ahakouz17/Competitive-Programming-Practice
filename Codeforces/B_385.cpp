// solved: 2014-02-07 14:21:26
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string w;
    int n, s = 0, b = 0, a = 0;
    cin >> w;
    n = w.length();
    vector<int> f(n, 0);
    for (int i = 0; i < n - 3; i++)
    {
        if (w[i] == 'b' && w[i + 1] == 'e' && w[i + 2] == 'a' && w[i + 3] == 'r')
        {
            f[i]++;
            int j = i - 1;
            while (f[j] == 0)
                j--;
            a = i - j;
            b = n - (i + 3);
            s += a * b;
            i += 2;
        }
    }
    cout << s;
    return 0;
}