// https://codeforces.com/contest/118/problem/A
// solved: Aug/21/2013
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sen;
    getline(cin, sen);
    for (int j = 0; j < sen.size(); j++)
    {
        if (sen[j] < 97)
            sen[j] = sen[j] + 32;
        if (!(sen[j] == 'o' || sen[j] == 'a' || sen[j] == 'e' || sen[j] == 'u' || sen[j] == 'i' || sen[j] == 'y'))
        {
            cout << "." << sen[j];
        }
    }

    return 0;
}