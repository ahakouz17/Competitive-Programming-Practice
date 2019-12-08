#include <iostream>
#include <string>
#include <memory.h>
#include <vector>
using namespace std;

bool letters[26];

int main()
{
    memset(letters, false, 26);
    int k, K;
    string q, si = "";
    vector<string> s;
    cin >> k >> q;
    K = k;
    if (k > q.length())
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < q.length(); i++)
    {
        if (letters[q[i] - 'a'] == false)
        {
            letters[q[i] - 'a'] = true;
            if (si != "")
            {
                k -= 1;
                s.push_back(si);
                si = q[i];
            }
            else if (si == "")
                si = q[i];
            if (k == 1)
            {
                for (int j = i + 1; j < q.length(); j++)
                    si += q[j];
                s.push_back(si);
                break;
            }
        }
        else
        {
            si += q[i];
        }
    }
    if (s.size() < K)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}