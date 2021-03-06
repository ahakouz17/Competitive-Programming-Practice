/* 
 * Project Euler #29: Distinct powers
 * 
 * Consider all integer combinations of ab for 2 ≤ a ≤ 5 and 2 ≤ b ≤ 5:
 *  22=4, 23=8, 24=16, 25=32
 *  32=9, 33=27, 34=81, 35=243
 *  42=16, 43=64, 44=256, 45=1024
 *  52=25, 53=125, 54=625, 55=3125
 * 
 * If they are then placed in numerical order, with any repeats removed, 
 * we get the following sequence of 15 distinct terms:
 * 
 * 4, 8, 9, 16, 25, 27, 32, 64, 81, 125, 243, 256, 625, 1024, 3125
 * 
 * How many distinct terms are in the sequence generated by ab for 2 ≤ a ≤ 100 and 2 ≤ b ≤ 100?
 * 
 * Answer: 9183
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler029/problem
 * 
 * hints:
 * https://stackoverflow.com/a/2148044
 * http://blog.sukrubezen.com/blog/2017/08/15/project-euler-hackerrank-version-question-29
 */
#include <iostream>
#include <map>
#include <vector>
#include <unordered_set>
#include <chrono>
#include <algorithm>
#include <math.h>
using namespace std::chrono;
using namespace std;

int main(){
    int n;
    cin >> n;

    int upperlimit = int(log2(n));
    // check perfect powers (where a number i = a^b and both a & b are integers)
    // do this by finding the number i^(1/r) (roots) and checking if they have int result
    // 2 <= r <= log(n)
    map <int, vector<int> > perfectPowers;
    double base;
    vector<bool> visited(n+1, false);
    for(int i = 2; i <= n; i++){

        for(int r = 2; r <= upperlimit; r++){
            base = round(pow(i, 1.0/r));
            if (pow(int(base), r) != i) continue;
            if(perfectPowers.find(int(base)) != perfectPowers.end()){
                perfectPowers[base].push_back(i);
                visited[i] = true;
            }else{
                if(visited[base]){
                    continue;}
                visited[i] = true;
                vector<int> temp(1, i);
                perfectPowers[base] = temp;
            }

        }
    }

    long long int countall = (n-1);
    countall *= (n-1);
    for (const auto &x_pair : perfectPowers){
        vector<int> powers;
        int e = 1;
        for(int power : perfectPowers[x_pair.first]){
            e++;
            for(int b = 2; b <= n; b++){
                powers.push_back(e*b);
            }
        }
        if(!powers.empty()){
            sort(powers.begin(), powers.end());
            for(int k = 0; k < powers.size()-1; k++){
                if(powers[k] >= 2 && powers[k] <= n) countall--;
                else if (powers[k] == powers[k+1])
                    countall--;
            }
        }

    }

    cout << countall << endl;
}
