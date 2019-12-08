// solved: 2013-12-23 10:56:33
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num.begin(), num.end());
    cout << num[n - 1] << " ";
    for (int i = 1; i < n - 1; i++)
        cout << num[i] << " ";
    cout << num[0];
    return 0;
}