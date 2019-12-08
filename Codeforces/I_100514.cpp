#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length();)
    {
        int sum = 0;
        for (int j = 7; j >= 0; j--, i++)
        {
            sum += int(s[i] - '0') * pow(2, j);
        }
        cout << char(sum);
    }
    return 0;
}