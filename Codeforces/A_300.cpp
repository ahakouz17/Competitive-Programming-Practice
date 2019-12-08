// solved: 2013-11-30 12:36:50
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, neg = 0, pos = 0;
    cin >> n;
    int temp;
    bool found = false;
    vector<int> s1;
    vector<int> s2;
    vector<int> s3;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 0 || (temp < 0 && found))
            s3.push_back(temp);
        else if (temp < 0 && !found)
            s1.push_back(temp);
        else if (temp > 0)
            s2.push_back(temp);
        if (temp < 0)
            found = true;
    }
    int i = 0, i1 = 1001, i2 = 1001;
    if (s2.size() == 0)
    {
        while (s2.size() != 2)
        {
            if (s3[i] != 0 && i1 == 1001)
            {
                i1 = i;
                s2.push_back(s3[i]);
            }
            else if (s3[i] != 0)
            {
                i2 = i;
                s2.push_back(s3[i]);
            }
            i++;
        }
    }
    cout << s1.size() << " ";
    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i] << " ";
    }
    cout << endl
         << s2.size() << " ";
    for (int i = 0; i < s2.size(); i++)
    {
        cout << s2[i] << " ";
    }
    if (i1 != 1001)
        cout << endl
             << s3.size() - 2 << " ";
    else
        cout << endl
             << s3.size() << " ";
    for (int i = 0; i < s3.size(); i++)
    {
        if (i != i1 && i != i2)
            cout << s3[i] << " ";
    }
    return 0;
}