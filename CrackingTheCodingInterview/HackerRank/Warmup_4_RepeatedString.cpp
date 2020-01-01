#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int s_len = s.size();
    long long int full_reps = n / s_len;
    int a_occurance = 0;
    int a_occ_lastRep = 0;
    for(int i = 0; i < s_len; i++){
        if(s[i] == 'a') {
            a_occurance++;
            if( i < n % s_len) a_occ_lastRep++;
        }
    }
    return a_occurance * full_reps + a_occ_lastRep;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
