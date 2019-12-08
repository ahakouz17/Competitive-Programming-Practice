#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    int t, n, upto, s, b, g;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> points(n);
        vector<int> reps;
        vector<int> repsAcc;
        upto = n / 2 - 1;
        for (int i = 0; i < n; i++) {
            cin >> points[i];
        }
        if (n < 10) {
            printf("0 0 0\n");
            continue;
        }

        while (points[upto] == points[upto + 1])
            upto--;
        int i = 1, prv, cur, rep_count = 1, sum = 0, maxRep = 0;
        prv = points[0];

        while (i <= upto + 1) {
            cur = points[i];
            if (cur != prv) {
                reps.push_back(rep_count);
                rep_count = 1;
            } else {
                rep_count++;
            }
            prv = cur;
            i++;
        }
        if (reps.size() <= 2) {
            printf("0 0 0\n");
            continue;
        }

        g = reps[0];
        s = 0;
        i = 1;
        while (s <= g) {
            s += reps[i++];
        }
        b = upto + 1 - s - g;

        if (b <= g) {
            printf("0 0 0\n");
            continue;
        }

        printf("%d %d %d\n", g, s, b);
        //printVector(reps);
        //printVector(repsAcc);
    }
    return 0;
}