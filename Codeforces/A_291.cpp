// solved: 2014-01-08 15:29:09
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, temp, pairs = 0;
    vector<int> calls;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp != 0)
            calls.push_back(temp);
    }
    sort(calls.begin(), calls.end());
    for (int i = 0; i < calls.size(); i++)
    {
        if (calls[i] == calls[i + 2])
        {
            cout << -1;
            return 0;
        }
        if (calls[i] == calls[i + 1])
        {
            pairs++;
            i++;
        }
    }
    cout << pairs;
    return 0;
}