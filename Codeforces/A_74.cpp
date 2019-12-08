// solved: 2013-12-22 02:40:34
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n, s = 0, p, m, a, b, c, d, e;
    cin >> n;
    string handle;
    vector<pair<int, string>> room(n);
    for (int i = 0; i < n; i++)
    {
        cin >> handle >> p >> m >> a >> b >> c >> d >> e;
        s = 100 * p - 50 * m + a + b + c + d + e;
        room[i] = make_pair(s, handle);
    }
    sort(room.begin(), room.end());
    cout << room[n - 1].second;
    return 0;
}