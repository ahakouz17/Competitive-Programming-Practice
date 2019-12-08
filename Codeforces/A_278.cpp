// solved: 2013-12-06 22:25:06
#include <iostream>
using namespace std;
int main()
{
    int n, temp, sum = 0, s1, s2, p1, p2;
    cin >> n;
    const int N = n + 1;
    int path[N];
    path[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> temp;
        sum += temp;
        path[i] = sum;
    }
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        cout << 0 << endl;
        return 0;
    }
    if (s1 > s2)
    {
        temp = s2;
        s2 = s1;
        s1 = temp;
    }
    p1 = path[s2 - 1] - path[s1 - 1];
    p2 = sum - p1;
    cout << min(p1, p2) << endl;
    return 0;
}