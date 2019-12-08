// solved: 2013-12-17
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int v1 = 0, v2 = 0, v3 = 0;
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    int i = 0;
    while (i < s1.length() || i < s2.length() || i < s3.length())
    {
        if (i < s1.length())
            if (s1[i] == 'o' || s1[i] == 'a' || s1[i] == 'i' || s1[i] == 'e' || s1[i] == 'u')
                v1++;
        if (i < s2.length())
            if (s2[i] == 'o' || s2[i] == 'a' || s2[i] == 'i' || s2[i] == 'e' || s2[i] == 'u')
                v2++;
        if (i < s3.length())
            if (s3[i] == 'o' || s3[i] == 'a' || s3[i] == 'i' || s3[i] == 'e' || s3[i] == 'u')
                v3++;
        if (v1 > 5 || v2 > 7 || v3 > 5)
        {
            cout << "NO";
            return 0;
        }
        i++;
    }
    if (v1 == 5 && v2 == 7 && v3 == 5)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}