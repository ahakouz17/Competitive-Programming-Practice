/*
 * Project Euler #14: Longest Collatz sequence
 *
 * The following iterative sequence is defined for the set of positive integers:
 * n → n/2 (n is even)
 * n → 3n + 1 (n is odd)
 *
 * Using the rule above and starting with 13, we generate the following sequence:
 * 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
 *
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
 * Although it has not been proved yet (Collatz Problem), it is thought that all starting
 * numbers finish at 1.
 *
 * Which starting number, under one million, produces the longest chain?
 *
 * NOTE: Once the chain starts the terms are allowed to go above one million.
 *
 * Answer:
 */

#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> sequenceLengths(5000009, -1);

int countCollatzSequence(unsigned long long int n) {
    if (n < sequenceLengths.size() && sequenceLengths[n] != -1) {
        //cout << "already stored! " << sequenceLengths[n]<<endl;
        return sequenceLengths[n];
    }
    int length = 1;
    if (n % 2 == 0)
        length = 1 + countCollatzSequence(n / 2);
    else
        length = 1 + countCollatzSequence(3 * n + 1);
    if (n < sequenceLengths.size())
        sequenceLengths[n] = length;
    return length;
}

int main() {
    int maxLength = 0;
    sequenceLengths[1] = 1;
    for (int i = 1; i <= 5000000; i++) {
        countCollatzSequence(i);
    }
    int maxTillNow = 1;
    int maxNumTillNow = 1;
    for (int i = 1; i <= 5000000; i++) {
        if(sequenceLengths[i] < maxTillNow){
            sequenceLengths[i] = maxNumTillNow;
        } else {
            maxTillNow = sequenceLengths[i];
            sequenceLengths[i] = i;
            maxNumTillNow = i;
        }
    }
    int t, n;
    cin >> t;
    while(t--){
        cin >>n;
        printf("%d\n", sequenceLengths[n]);
    }
    return 0;
}
