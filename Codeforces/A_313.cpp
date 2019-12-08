// solved: 2013-11-29 20:37:26
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string acc;
    cin >> acc;
    int l;
    l = acc.length() - 1;
    if (acc[0] != '-')
        cout << acc << endl;
    else
    {
        if (acc[l] > acc[l - 1] && acc.substr(0, l) != "-0")
            cout << acc.substr(0, l) << endl;
        else if (acc[l] <= acc[l - 1] && (acc.substr(0, l - 1) + acc[l]) != "-0")
            cout << acc.substr(0, l - 1) << acc[l] << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}