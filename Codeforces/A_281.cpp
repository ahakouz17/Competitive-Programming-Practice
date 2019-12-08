// https://codeforces.com/contest/281/problem/A
// solved:	2013-08-25

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    cin >> word;
    if (word[0] >= 97)
        word[0] -= 32;

    for (int i = 0; i < word.size(); i++)
        cout << word[i];
    cout << endl;
    return 0;
}