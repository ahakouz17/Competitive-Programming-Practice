// solved 2013-12-17 01:30:28

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n, in = 1;
    cin >> n;
    vector<vector<string>> crew(n, vector<string>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> crew[i][0] >> crew[i][1];
        if (crew[i][1] == "captain")
            in = i;
    }
    for (int i = 0; i < n; i++)
        if (crew[i][1] == "rat")
            cout << crew[i][0] << endl;
    for (int i = 0; i < n; i++)
        if (crew[i][1] == "child" || crew[i][1] == "woman")
            cout << crew[i][0] << endl;
    for (int i = 0; i < n; i++)
        if (crew[i][1] == "man")
            cout << crew[i][0] << endl;
    cout << crew[in][0] << endl;

    return 0;
}