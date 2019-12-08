// solved: 2013-11-02 02:11:01
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string n1, n2, c = "", num;
    cin >> n1 >> n2;
    int l = n1.length();
    for (int i = 0; i < l; i++)
    {
        if (n1[i] == n2[i])
            c += n1[i];
        else
            break;
    }
    string p = "";
    for (int i = 0; i < n - 2; i++)
    {
        l = c.length();
        cin >> num;
        for (int j = 0; j < l; j++)
        {
            if (num[j] == c[j])
                p += c[j];
            else
                break;
        }
        c = p;
        p = "";
    }
    cout << c.length() << endl;
    return 0;
}