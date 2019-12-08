// solved 2019-11-20
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, temp_i;
    string s, beauty;
    cin >> t;
    vector<char> l = {'a', 'b', 'c'};
    while (t--) {
        cin >> s;
        beauty = s;
        for (int i = 0; i < s.size(); i++) {
            if (i == 0 && s[i] == '?') {
                if (s.size() == 1) {
                    beauty[i] = 'a';
                    break;
                } else if (s[i + 1] == '?') {
                    beauty[i] = 'a';
                } else {
                    temp_i = 0;
                    while (l[temp_i] == s[i + 1])
                        temp_i++;
                    beauty[i] = l[temp_i];
                }
            } else if (i != 0) {
                if (s[i] == '?') {
                    if (i == s.size() - 1) {
                        temp_i = 0;
                        while (l[temp_i] == beauty[i - 1])
                            temp_i++;
                        beauty[i] = l[temp_i];
                    } else {
                        temp_i = 0;
                        while (l[temp_i] == s[i + 1] || l[temp_i] == beauty[i - 1])
                            temp_i++;
                        beauty[i] = l[temp_i];
                    }
                } else if (s[i] == s[i - 1]) {
                    beauty = "-1";
                    break;
                }
            }
            //cout << i << ":  "<< beauty << endl;
        }
        cout << beauty << endl;
    }
    return 0;
}