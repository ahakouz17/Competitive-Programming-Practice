// solved: 2013-12-17 00:15:10
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;
int main()
{
    string a, b, a2 = "", b2 = "", c2 = "";
    cin >> a >> b;
    int i = 0;
    long long numa = atoi(a.c_str()), numb = atoi(b.c_str());
    long long C = numa + numb;
    ostringstream n;
    n << C;
    string c;
    c = n.str();
    while (i < a.length() || i < b.length() || i < c.length())
    {
        if (i < a.length() && a[i] != '0')
            a2 += a[i];
        if (i < b.length() && b[i] != '0')
            b2 += b[i];
        if (i < c.length() && c[i] != '0')
            c2 += c[i];
        i++;
    }
    int numa2 = atoi(a2.c_str()), numb2 = atoi(b2.c_str()), numc2 = atoi(c2.c_str());
    if (numa2 + numb2 == numc2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}