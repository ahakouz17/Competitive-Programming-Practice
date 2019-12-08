// solved: 2013-11-30 21:23:27
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> st;
    int n, sum = 0, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        st.push_back(temp);
    }
    int x, y;
    cin >> x >> y;
    if (sum > 2 * y || sum < 2 * x)
    {
        cout << 0 << endl;
        return 0;
    }
    int e = n - 1, sume = 0;
    while (e > 0)
    {
        sume += st[e];
        if (sume >= x && (sum - sume) >= x && sume <= y && sum - sume <= y)
        {
            cout << e + 1 << endl;
            return 0;
        }
        else if (sume >= x && (sum - sume) <= x || sume > y)
        {
            cout << 0 << endl;
            return 0;
        }
        e--;
    }
    {
        cout << 0 << endl;
        return 0;
    }
}