// https://codeforces.com/contest/110/problem/A
// solved: 2013-08-25
#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
#include <sstream>
using namespace std;
int main()
{
    string num;
    cin >> num;
    long long int c = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == '4' || num[i] == '7')
            c++;
    }

    string counter = static_cast<ostringstream *>(&(ostringstream() << c))->str();

    for (int i = 0; i < counter.size(); i++)
    {
        if (counter[i] != '4' && counter[i] != '7')
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}