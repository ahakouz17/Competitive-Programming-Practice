//https://codeforces.com/contest/271/problem/A
// solved: 2013-08-25
#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
#include <sstream>
using namespace std;
int main()
{
    int yn;
    cin >> yn;
    string y;
    yn++;
    for (; true; yn++)
    {
        y = static_cast<ostringstream *>(&(ostringstream() << yn))->str();
        if (y[0] != y[1] && y[0] != y[2] && y[0] != y[3] && y[1] != y[2] && y[1] != y[3] && y[2] != y[3])
        {
            for (int j = 0; j < y.size(); j++)
                cout << y[j];
            return 0;
        }
    }
    return 0;
}
