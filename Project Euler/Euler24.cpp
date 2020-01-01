/*
 * Project Euler #24: Lexicographic permutations
 *
 * A permutation is an ordered arrangement of objects.
 * For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4.
 * If all of the permutations are listed numerically or alphabetically,
 * we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:
 *
 * 012   021   102   120   201   210
 *
 * What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
 *
 * Answer: 2783915460
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler024/problem
 */

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
long long int factorial(int n){
    if (n == 1) return 1;
    else return n * factorial(n-1);
}
int main(){
    int t;
    long long int n;
    long long int f;

    scanf("%d", &t);
    while(t--){
        cin >> n;
        
        vector<char> letters = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
        //vector<char> letters = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int numOfLetters = letters.size();
        f = factorial(numOfLetters);
        for(int i = 0; i < 13; i++){
            int ind = (n-1) / (f/numOfLetters);
            char a = letters[ind];
            cout << a;
            letters.erase(letters.begin() + ind);
            n = (n-1) % (f/numOfLetters)+ 1;
            f /= numOfLetters;
            numOfLetters--;
        }
        cout <<endl;
    }
    return 0;
}
