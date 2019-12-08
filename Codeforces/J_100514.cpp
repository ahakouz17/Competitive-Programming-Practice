#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char arr[26] = {'n', 'h', 'r', 'x', 'k', 'e', 'y', 'o', 'q', 'm', 'j', 'b', 'd', 'u', 'v', 'a', 'p', 'w', 'g', 'z', 'f', 'i', 'c', 's', 't', 'l'};
    for (int i = 0; i < s.length(); i++)
    {
        cout << arr[int(s[i] - 'a')];
    }
    return 0;
}