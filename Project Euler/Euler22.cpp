/* 
 * Project Euler #22: Names scores
 * 
 * Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing
 * over five-thousand first names, begin by sorting it into alphabetical order. 
 * Then working out the alphabetical value for each name, multiply this value by its 
 * alphabetical position in the list to obtain a name score.
 * For example, when the list is sorted into alphabetical order, COLIN, which is 
 * worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would
 * obtain a score of 938 × 53 = 49714.
 * 
 * What is the total of all the name scores in the file?
 * 
 * Answer: 871198282
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler022/problem
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int calculateAlphabaticScore(string s){
    int score = 0;
    for(int i =0; i < s.size(); i++){
        if (s[i] - 'A' > 26){
            score += (s[i] - 'a' + 1);
        } else {
            score += (s[i] - 'A' + 1);
        }
    }
    return score;
}
int main(){
    int n, q, totalScore = 0;
    cin >> n;
    string query;
    vector<string> names(n);
    for(int i = 0; i < n; i++){
        cin >> names[i];
    }
    sort(names.begin(), names.end());
    map<string, int> name_score;
    int alpha_score, rank;
    for(int i = 0; i < n; i++){
        rank = i+1;
        alpha_score = calculateAlphabaticScore(names[i]);
        //totalScore += rank * alpha_score;
        name_score[names[i]] = rank * alpha_score;
    } 
    //cout <<totalScore << endl;
    cin >> q;
    while(q--){
        cin >> query;
        cout << name_score[query] << endl;
    }
    return 0;
}
