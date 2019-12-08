// https://codeforces.com/contest/158/problem/C
// solved: 2013-12-23 04:01:28
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string com, temp, p = "";
    vector<string> path(0);
    for (int j = 0; j < n; j++)
    {
        cin >> com;
        if (com == "pwd")
        {
            if (path.size() == 0)
                cout << '/' << endl;
            else
            {
                for (int i = 0; i < path.size(); i++)
                {
                    cout << '/' << path[i];
                }
                cout << '/' << endl;
            }
        }
        else
        {
            cin >> temp;
            if (temp[0] == '/')
                path.clear();
            for (int i = 0; i < temp.length(); i++)
            {
                while (temp[i] != '/' && i < temp.length())
                {
                    p += temp[i];
                    i++;
                }
                if (i != 0)
                {
                    if (p == "..")
                        path.pop_back();
                    else
                        path.push_back(p);
                    p = "";
                }
            }
        }
    }
    return 0;
}