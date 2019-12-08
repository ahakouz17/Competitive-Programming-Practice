// solved: 2013-12-07 04:06:20
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    char t;
    cin >> n >> m;
    vector<vector<int>> st;
    vector<int> temp;
    for (int i = 0; i < n * m; i++)
    {
        cin >> t;
        if (i < m)
        {
            temp.push_back(int(t) - 48);
            temp.push_back(int(t) - 48);
            st.push_back(temp);
            temp.clear();
        }
        else
        {
            int in = i % m;
            st[in].push_back(int(t) - 48);
            if (int(t) - 48 > st[in][0])
                st[in][0] = int(t) - 48;
        }
    }
    vector<int> stu(n + 1, 0);
    for (int i = 0; i < st.size(); i++)
    {
        for (int j = 1; j < st[i].size(); j++)
        {
            if (st[i][j] == st[i][0])
                stu[j] = 1;
        }
    }
    int c = 0, i = 0;
    while (i <= n)
    {
        if (stu[i] != 0)
            c++;
        i++;
    }
    cout << c << endl;
    return 0;
}
