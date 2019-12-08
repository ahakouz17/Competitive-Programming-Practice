#include <iostream>
#include <regex>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    string l[8] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    for (int i = 0; i < 8; i++)
    {
        regex r("^" + s + "$");
        if (regex_match(l[i], r))
            cout << l[i] << endl;
    }
    return 0;
}