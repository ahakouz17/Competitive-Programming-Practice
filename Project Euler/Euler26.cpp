/*
 * Project Euler #26: Reciprocal cycles
 * 
 * A unit fraction contains 1 in the numerator. 
 * The decimal representation of the unit fractions with denominators 2 to 10 are given:
 * 
 *   1/2	= 	0.5
 *   1/3	= 	0.(3)
 *   1/4	= 	0.25
 *   1/5	= 	0.2
 *   1/6	= 	0.1(6)
 *   1/7	= 	0.(142857)
 *   1/8	= 	0.125
 *   1/9	= 	0.(1)
 *   1/10	= 	0.1 
 * 
 * Where 0.1(6) means 0.166666..., and has a 1-digit recurring cycle. 
 * It can be seen that 1/7 has a 6-digit recurring cycle.
 * 
 * Find the value of d < 1000 for which 1/d contains the longest recurring cycle in its decimal fraction part.
 * 
 * Answer: 983
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler026/problem
 */
#include <iostream>
#include <vector>
using namespace std;
int countCycleLength(int n);
vector<int> cycleLengths(10005, -1);

int main(){
    int t, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int maxCycle = 1, temp, maxCycleNum=3;
        for(int i = 4; i < n; i++){
            temp = countCycleLength(i);
            if(temp > maxCycle){
                maxCycle = temp;
                maxCycleNum = i;
            }
        }
        cout << maxCycleNum << endl;
    }
    return 0;
}

int countCycleLength(int n){
    if(cycleLengths[n] != -1) 
        return cycleLengths[n];

    vector<int> seen(10*(n+1), 0);
    int remainder = 10;
    for(int i = 0; i <= n; i++){
        //cout << "Rem: "<<remainder<<endl;

        if (remainder == 0){
            cycleLengths[n] = 0;
            return 0; // terminating decimal
        } 
        // if the cycle started repeating (when you see a repeated remainder)
        if(seen[remainder] != 0){
            cycleLengths[n] =  i - seen[remainder];
            return i - seen[remainder];
        }
        seen[remainder] = i;
        remainder = (remainder % n) * 10;
    }
}