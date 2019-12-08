#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    string temp;
    int maxi = 0;
    int mat[26][26] = {0};
    for (int i = 0; i < n; i++)
    {
        int let[26] = {0};
        int no_let = 0;
        vector<char> c;
        cin >> temp;
        for (int j = 0; j < temp.length(); j++)
        {
            if (let[temp[j] - 'a'] == 0)
            {
                let[temp[j] - 'a']++;
                no_let++;
                c.push_back(temp[j]);
            }
            if (no_let > 2)
            {
                no_let = -1;
                break;
            }
        }
        //        for(int b = 0; b < c.size(); b++)
        //            cout<<c[b] << "  ";
        //        cout<<no_let<<endl;
        if (no_let != -1)
        {
            if (c.size() == 2)
            {
                mat[c[0] - 'a'][c[1] - 'a'] += temp.length();
                mat[c[1] - 'a'][c[0] - 'a'] += temp.length();
                maxi = max(maxi, mat[c[1] - 'a'][c[0] - 'a']);
            }
            else
            {
                for (int k = 0; k < 26; k++)
                {
                    if (k == c[0] - 'a')
                        continue;
                    mat[c[0] - 'a'][k] += temp.length();
                    mat[k][c[0] - 'a'] += temp.length();
                    maxi = max(maxi, mat[k][c[0] - 'a']);
                }
            }
        }
        c.clear();
    }
    cout << maxi << endl;
    return 0;
}