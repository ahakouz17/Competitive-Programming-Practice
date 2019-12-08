// solved: 2013-12-15 00:27:08
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> len(4);
int main()
{
    cin >> len[0] >> len[1] >> len[2] >> len[3];
    sort(len.begin(), len.end());
    if (len[1] + len[2] > len[3] || len[0] + len[1] > len[2])
    {
        cout << "TRIANGLE";
        return 0;
    }
    if (len[0] + len[1] == len[2] || len[0] + len[1] == len[3] || len[1] + len[2] == len[3] || len[0] + len[2] == len[3])
    {
        cout << "SEGMENT";
        return 0;
    }
    cout << "IMPOSSIBLE";
    return 0;
}