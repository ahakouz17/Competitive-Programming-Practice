/*
 * Project Euler #17: Number to Words
 *
 * If the numbers 1 to 5 are written out in words: one, two, three, four, five,
 * then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
 *
 * If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words,
 * how many letters would be used?
 *
 * NOTE: Do not count spaces or hyphens. For example,
 * 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters.
 * The use of "and" when writing out numbers is in compliance with British usage.
 *
 * Answer: 
 */

#include <iostream>
#include <math.h>
#include <map>
#include <bits/stdc++.h>
using namespace std;

string onesToWord[] = {"","One ", "Two ", "Three ","Four ","Five ","Six ","Seven ","Eight ","Nine ","Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ","Nineteen "};
string tenToWords[] = {"","Ten ", "Twenty ","Thirty ","Forty ","Fifty ","Sixty ","Seventy ","Eighty ","Ninety "};
string hundredsToWords[] = {"","One Hundred ", "Two Hundred ", "Three Hundred ","Four Hundred ","Five Hundred ","Six Hundred ","Seven Hundred ","Eight Hundred ","Nine Hundred "};
string tenPowers[] = {"Thousand ", "Million ", "Billion ", "Trillion "};

int convertToNumber(string s, int start, int end){
    int number = 0;
    int factor = pow(10, (end-start));
    for(int i = start; i <= end; i++){
        number += factor*(int)(s[i]-'0');
        factor /= 10;
    }
    return number;
}


int main(){
    int t, numOfDigits, threeDigitNum;
    string n;
    cin >> t;
    while(t--){
        cin >> n;
        numOfDigits = n.size();
        int ind = 10;
        int count = 0;
        int covered= 0;

        while(ind >= 1){
            if(numOfDigits < ind) {
                ind -=3;
                continue;
            }
            threeDigitNum = convertToNumber(n, covered, covered+((numOfDigits >= ind + 2)?2: (ind == 1)? n.size()-1:numOfDigits%ind));
            if(threeDigitNum != 0){
                if(threeDigitNum > 99){
                    cout << hundredsToWords[threeDigitNum/100];
                    threeDigitNum %= 100;
                }
                if(threeDigitNum < 20){
                    cout << onesToWord[threeDigitNum];
                } else{
                    cout << tenToWords[threeDigitNum/10] << onesToWord[threeDigitNum %10];
                }
                if(ind != 1) cout << tenPowers[ind / 3 -1];
            }
            covered +=((numOfDigits >= ind + 2)?2: numOfDigits%ind)+1;
            ind -=3;
        }
        if(n == "0"){
            cout << "Zero";
        }
        cout << endl;

    }
    return 0;
 }
