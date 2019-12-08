#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    //cout<<int('n');
    for (int i = 0; i < s.length(); i++)
    {
        cout << char((s[i] + 13 - 97) % 26 + 97);
    }
    return 0;
}