// solved: 2013-12-22 04:05:01
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int cap = 0, sm = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] >= 'a')
            sm++;
        else
            cap++;
    }
    if (sm >= cap)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] >= 'a')
                cout << word[i];
            else
                cout << char(word[i] + 32);
        }
    }
    else
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] < 'a')
                cout << word[i];
            else
                cout << char(word[i] - 32);
        }
    }
    return 0;
}