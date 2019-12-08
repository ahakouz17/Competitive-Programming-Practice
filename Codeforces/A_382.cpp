// solved: 2014-01-17 19:54:58
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int en = 0;
    string w, re;
    cin >> w >> re;
    vector<char> l;
    vector<char> r;
    for (int i = 0; i < w.length(); i++)
    {
        if (w[i] != '|')
            l.push_back(w[i]);
        else
        {
            i++;
            for (i; i < w.length(); i++)
                r.push_back(w[i]);
            break;
        }
    }
    int mi = min(r.size(), l.size()), ma = max(l.size(), r.size());
    if (mi + re.length() < ma)
    {
        cout << "Impossible";
        return 0;
    }
    while (en != re.length())
    {
        if (r.size() > l.size())
        {
            l.push_back(re[en]);
            en++;
        }
        else if (l.size() >= r.size())
        {
            r.push_back(re[en]);
            en++;
        }
    }
    if (r.size() != l.size())
    {
        cout << "Impossible";
        return 0;
    }
    for (int i = 0; i < l.size(); i++)
        cout << l[i];
    cout << '|';
    for (int i = 0; i < r.size(); i++)
        cout << r[i];
    return 0;
}